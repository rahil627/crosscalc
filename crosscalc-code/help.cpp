#include "help.h"
#include "ui_help.h"

help::help(QWidget *parent) :
    QMainWindow(parent),
    m_ui(new Ui::help)
{
    m_ui->setupUi(this);
}

help::~help()
{
    delete m_ui;
}

void help::changeEvent(QEvent *e)
{
    QMainWindow::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        m_ui->retranslateUi(this);
        break;
    default:
        break;
    }
}
