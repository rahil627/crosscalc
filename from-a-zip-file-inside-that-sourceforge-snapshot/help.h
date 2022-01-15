#ifndef HELP_H
#define HELP_H

#include <QtGui/QMainWindow>

namespace Ui {
    class help;
}

class help : public QMainWindow {
    Q_OBJECT
public:
    help(QWidget *parent = 0);
    ~help();

protected:
    void changeEvent(QEvent *e);

private:
    Ui::help *m_ui;
};

#endif // HELP_H
