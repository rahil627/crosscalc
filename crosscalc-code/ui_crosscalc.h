/********************************************************************************
** Form generated from reading ui file 'crosscalc.ui'
**
** Created: Sun Oct 11 04:45:29 2009
**      by: Qt User Interface Compiler version 4.5.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_CROSSCALC_H
#define UI_CROSSCALC_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QTextEdit>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_crosscalc
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout_2;
    QLabel *history_label;
    QTextEdit *history;
    QLabel *input_label;
    QLineEdit *input;
    QMenuBar *menuBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *crosscalc)
    {
        if (crosscalc->objectName().isEmpty())
            crosscalc->setObjectName(QString::fromUtf8("crosscalc"));
        crosscalc->resize(200, 250);
        crosscalc->setMinimumSize(QSize(200, 250));
        centralWidget = new QWidget(crosscalc);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(centralWidget->sizePolicy().hasHeightForWidth());
        centralWidget->setSizePolicy(sizePolicy);
        centralWidget->setMinimumSize(QSize(0, 0));
        gridLayout_2 = new QGridLayout(centralWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setMargin(11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        history_label = new QLabel(centralWidget);
        history_label->setObjectName(QString::fromUtf8("history_label"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        history_label->setFont(font);

        gridLayout_2->addWidget(history_label, 0, 0, 1, 1);

        history = new QTextEdit(centralWidget);
        history->setObjectName(QString::fromUtf8("history"));
        history->setEnabled(true);
        history->viewport()->setProperty("cursor", QVariant(QCursor(Qt::IBeamCursor)));
        history->setReadOnly(false);

        gridLayout_2->addWidget(history, 1, 0, 1, 1);

        input_label = new QLabel(centralWidget);
        input_label->setObjectName(QString::fromUtf8("input_label"));
        input_label->setFont(font);

        gridLayout_2->addWidget(input_label, 2, 0, 1, 1);

        input = new QLineEdit(centralWidget);
        input->setObjectName(QString::fromUtf8("input"));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        input->setFont(font1);

        gridLayout_2->addWidget(input, 3, 0, 1, 1);

        crosscalc->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(crosscalc);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 200, 21));
        crosscalc->setMenuBar(menuBar);
        statusBar = new QStatusBar(crosscalc);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        crosscalc->setStatusBar(statusBar);

        retranslateUi(crosscalc);

        QMetaObject::connectSlotsByName(crosscalc);
    } // setupUi

    void retranslateUi(QMainWindow *crosscalc)
    {
        crosscalc->setWindowTitle(QApplication::translate("crosscalc", "CrossCalc", 0, QApplication::UnicodeUTF8));
        history_label->setText(QApplication::translate("crosscalc", "History                             F1 - Help", 0, QApplication::UnicodeUTF8));
        input_label->setText(QApplication::translate("crosscalc", "Input", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(crosscalc);
    } // retranslateUi

};

namespace Ui {
    class crosscalc: public Ui_crosscalc {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CROSSCALC_H
