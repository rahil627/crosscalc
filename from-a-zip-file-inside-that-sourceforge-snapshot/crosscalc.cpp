#include "crosscalc.h"
#include "ui_crosscalc.h"
#include <string>
#include <QKeyEvent>

using namespace std;

crosscalc::crosscalc(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::crosscalc)
{
    ui->setupUi(this);

    //widget settings
    ui->history->setReadOnly(TRUE);

    help_dialog = new help;

    //connections
    connect(ui->input, SIGNAL(returnPressed()), this, SLOT(calculate()));

    //goodies
    //this->setWindowOpacity(.5); //transparency
    //setWindowFlags(Qt::FramelessWindowHint); //removes window frame
    //setWindowFlags(Qt::WindowContextHelpButtonHint);
    //setAttribute(Qt::WA_TranslucentBackground, true); //can click behind the application

    //initialize the value and function lists
    vlist.AddDefaultValues();
    flist.AddDefaultFunctions();
}

crosscalc::~crosscalc()
{
    delete ui;
}

void crosscalc::calculate()
{
    //ui->problem->setText(ui->problem->text() + "b1");

    //variables
    string text;

    //Qstring expression=ui->input->text();

    //Finally, create the expression and set it to use the values and functions.
    ExprEval::Expression e;
    e.SetValueList(&vlist);
    e.SetFunctionList(&flist);

    //Now the expression is ready to be parsed and evaluated.
    //e.Parse("y=5");
    //result = e.Evaluate();

    QString input_text=ui->input->text();
    string input_text2=string((const char *)input_text.toLocal8Bit()); //convert QString to string

    e.Parse(input_text2);
    double result = e.Evaluate();

    //QString result2=QString(QString::fromLocal8Bit(result.c_str())); //convert string to QString

    //convert double to Qstring
    QString result2;
    result2.setNum(result);

    ui->history->append(ui->input->text());
    ui->history->append("         "+result2); //dunno why it's not 9 spaces
    ui->input->clear();
}

bool crosscalc::event(QEvent *event)
{
    if (event->type() == QEvent::KeyPress) {
        QKeyEvent *ke = static_cast<QKeyEvent *>(event);
        if (ke->key() == Qt::Key_F1) {
            help_dialog->show();
            return true;
        }
    }
    return QWidget::event(event);
}


/*
QString s2q(const string &s)
{
        return QString(QString::fromLocal8Bit(s.c_str()));
}

string q2s(const QString &s)
{
        return string((const char *)s.local8Bit());
}
*/
