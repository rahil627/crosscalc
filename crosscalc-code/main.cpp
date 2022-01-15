#include <QtGui/QApplication>
#include "crosscalc.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    crosscalc w;
    w.show();
    return a.exec();
}
