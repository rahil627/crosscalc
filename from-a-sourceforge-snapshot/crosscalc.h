#ifndef CROSSCALC_H
#define CROSSCALC_H

#include <QtGui/QMainWindow>
#include <help.h>

//To use ExprEval, just include 'expreval.h' in your program.
#include "expreval/expreval.h"

//All the items are under the 'ExprEval' namespace:
//using namespace ExprEval;

namespace Ui
{
    class crosscalc;
}

class crosscalc : public QMainWindow
{
    Q_OBJECT

public:
    crosscalc(QWidget *parent = 0);
    ~crosscalc();
    bool event(QEvent *event); //extended to handle F1 key event

public slots:
    void calculate();

private:
    Ui::crosscalc *ui;
    help *help_dialog;

    //create the value and function lists
    ExprEval::ValueList vlist;
    ExprEval::FunctionList flist;
};

#endif // CROSSCALC_H
