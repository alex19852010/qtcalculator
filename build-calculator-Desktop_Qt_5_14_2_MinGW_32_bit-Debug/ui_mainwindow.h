/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *but_s;
    QPushButton *but_7;
    QPushButton *but_m;
    QPushButton *but_8;
    QPushButton *but_6;
    QPushButton *but_9;
    QPushButton *but_1;
    QPushButton *but_3;
    QPushButton *but_5;
    QPushButton *but_a;
    QPushButton *but_4;
    QPushButton *but_2;
    QPushButton *but_c;
    QPushButton *but_0;
    QPushButton *but_e;
    QPushButton *but_d;
    QTextBrowser *screen;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(319, 270);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(30, 100, 261, 151));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        but_s = new QPushButton(gridLayoutWidget);
        but_s->setObjectName(QString::fromUtf8("but_s"));

        gridLayout->addWidget(but_s, 1, 3, 1, 1);

        but_7 = new QPushButton(gridLayoutWidget);
        but_7->setObjectName(QString::fromUtf8("but_7"));

        gridLayout->addWidget(but_7, 0, 0, 1, 1);

        but_m = new QPushButton(gridLayoutWidget);
        but_m->setObjectName(QString::fromUtf8("but_m"));

        gridLayout->addWidget(but_m, 2, 3, 1, 1);

        but_8 = new QPushButton(gridLayoutWidget);
        but_8->setObjectName(QString::fromUtf8("but_8"));

        gridLayout->addWidget(but_8, 0, 1, 1, 1);

        but_6 = new QPushButton(gridLayoutWidget);
        but_6->setObjectName(QString::fromUtf8("but_6"));

        gridLayout->addWidget(but_6, 1, 2, 1, 1);

        but_9 = new QPushButton(gridLayoutWidget);
        but_9->setObjectName(QString::fromUtf8("but_9"));

        gridLayout->addWidget(but_9, 0, 2, 1, 1);

        but_1 = new QPushButton(gridLayoutWidget);
        but_1->setObjectName(QString::fromUtf8("but_1"));

        gridLayout->addWidget(but_1, 2, 0, 1, 1);

        but_3 = new QPushButton(gridLayoutWidget);
        but_3->setObjectName(QString::fromUtf8("but_3"));

        gridLayout->addWidget(but_3, 2, 2, 1, 1);

        but_5 = new QPushButton(gridLayoutWidget);
        but_5->setObjectName(QString::fromUtf8("but_5"));

        gridLayout->addWidget(but_5, 1, 1, 1, 1);

        but_a = new QPushButton(gridLayoutWidget);
        but_a->setObjectName(QString::fromUtf8("but_a"));

        gridLayout->addWidget(but_a, 0, 3, 1, 1);

        but_4 = new QPushButton(gridLayoutWidget);
        but_4->setObjectName(QString::fromUtf8("but_4"));

        gridLayout->addWidget(but_4, 1, 0, 1, 1);

        but_2 = new QPushButton(gridLayoutWidget);
        but_2->setObjectName(QString::fromUtf8("but_2"));

        gridLayout->addWidget(but_2, 2, 1, 1, 1);

        but_c = new QPushButton(gridLayoutWidget);
        but_c->setObjectName(QString::fromUtf8("but_c"));

        gridLayout->addWidget(but_c, 3, 0, 1, 1);

        but_0 = new QPushButton(gridLayoutWidget);
        but_0->setObjectName(QString::fromUtf8("but_0"));

        gridLayout->addWidget(but_0, 3, 1, 1, 1);

        but_e = new QPushButton(gridLayoutWidget);
        but_e->setObjectName(QString::fromUtf8("but_e"));

        gridLayout->addWidget(but_e, 3, 2, 1, 1);

        but_d = new QPushButton(gridLayoutWidget);
        but_d->setObjectName(QString::fromUtf8("but_d"));

        gridLayout->addWidget(but_d, 3, 3, 1, 1);

        screen = new QTextBrowser(centralwidget);
        screen->setObjectName(QString::fromUtf8("screen"));
        screen->setGeometry(QRect(30, 30, 256, 61));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        but_s->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        but_7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        but_m->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        but_8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        but_6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        but_9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        but_1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        but_3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        but_5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        but_a->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        but_4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        but_2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        but_c->setText(QCoreApplication::translate("MainWindow", "C", nullptr));
        but_0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        but_e->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        but_d->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
