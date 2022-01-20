/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLineEdit *LE_CONNECTION;
    QLabel *label;
    QTextEdit *TE_LOG;
    QLabel *label_6;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QGridLayout *gridLayout_2;
    QLabel *label_8;
    QLabel *label_9;
    QLineEdit *LE_COUNT_DIS_10;
    QLineEdit *LE_COUNT_DIS_1;
    QLineEdit *LE_COUNT_DIS_5;
    QLabel *label_10;
    QLabel *label_11;
    QGridLayout *gridLayout;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *LE_COUNT_10;
    QLineEdit *LE_COUNT_1;
    QLineEdit *LE_COUNT_5;
    QLabel *label_3;
    QWidget *widget1;
    QGridLayout *gridLayout_3;
    QLabel *label_7;
    QLineEdit *LE_SUCCESS_CNT;
    QLabel *label_12;
    QLineEdit *LE_FAIL_CNT;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1005, 438);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        LE_CONNECTION = new QLineEdit(centralwidget);
        LE_CONNECTION->setObjectName(QString::fromUtf8("LE_CONNECTION"));
        LE_CONNECTION->setGeometry(QRect(160, 100, 281, 31));
        LE_CONNECTION->setAlignment(Qt::AlignCenter);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(80, 40, 441, 41));
        QFont font;
        font.setPointSize(30);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        TE_LOG = new QTextEdit(centralwidget);
        TE_LOG->setObjectName(QString::fromUtf8("TE_LOG"));
        TE_LOG->setGeometry(QRect(570, 60, 391, 231));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(570, 30, 67, 17));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(80, 150, 442, 191));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font1;
        font1.setPointSize(15);
        label_2->setFont(font1);
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_2);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_8 = new QLabel(widget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        QFont font2;
        font2.setPointSize(20);
        label_8->setFont(font2);
        label_8->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_8, 0, 1, 1, 1);

        label_9 = new QLabel(widget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setFont(font2);
        label_9->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_9, 0, 2, 1, 1);

        LE_COUNT_DIS_10 = new QLineEdit(widget);
        LE_COUNT_DIS_10->setObjectName(QString::fromUtf8("LE_COUNT_DIS_10"));

        gridLayout_2->addWidget(LE_COUNT_DIS_10, 1, 2, 1, 1);

        LE_COUNT_DIS_1 = new QLineEdit(widget);
        LE_COUNT_DIS_1->setObjectName(QString::fromUtf8("LE_COUNT_DIS_1"));

        gridLayout_2->addWidget(LE_COUNT_DIS_1, 1, 0, 1, 1);

        LE_COUNT_DIS_5 = new QLineEdit(widget);
        LE_COUNT_DIS_5->setObjectName(QString::fromUtf8("LE_COUNT_DIS_5"));

        gridLayout_2->addWidget(LE_COUNT_DIS_5, 1, 1, 1, 1);

        label_10 = new QLabel(widget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setFont(font2);
        label_10->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_10, 0, 0, 1, 1);


        verticalLayout->addLayout(gridLayout_2);

        label_11 = new QLabel(widget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setFont(font1);
        label_11->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_11);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font2);
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_4, 0, 1, 1, 1);

        label_5 = new QLabel(widget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font2);
        label_5->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_5, 0, 2, 1, 1);

        LE_COUNT_10 = new QLineEdit(widget);
        LE_COUNT_10->setObjectName(QString::fromUtf8("LE_COUNT_10"));

        gridLayout->addWidget(LE_COUNT_10, 1, 2, 1, 1);

        LE_COUNT_1 = new QLineEdit(widget);
        LE_COUNT_1->setObjectName(QString::fromUtf8("LE_COUNT_1"));

        gridLayout->addWidget(LE_COUNT_1, 1, 0, 1, 1);

        LE_COUNT_5 = new QLineEdit(widget);
        LE_COUNT_5->setObjectName(QString::fromUtf8("LE_COUNT_5"));

        gridLayout->addWidget(LE_COUNT_5, 1, 1, 1, 1);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font2);
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_3, 0, 0, 1, 1);


        verticalLayout->addLayout(gridLayout);

        widget1 = new QWidget(centralwidget);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(610, 300, 281, 61));
        gridLayout_3 = new QGridLayout(widget1);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(widget1);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font1);
        label_7->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_7, 0, 0, 1, 1);

        LE_SUCCESS_CNT = new QLineEdit(widget1);
        LE_SUCCESS_CNT->setObjectName(QString::fromUtf8("LE_SUCCESS_CNT"));
        LE_SUCCESS_CNT->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(LE_SUCCESS_CNT, 0, 1, 1, 1);

        label_12 = new QLabel(widget1);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setFont(font1);
        label_12->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_12, 1, 0, 1, 1);

        LE_FAIL_CNT = new QLineEdit(widget1);
        LE_FAIL_CNT->setObjectName(QString::fromUtf8("LE_FAIL_CNT"));
        LE_FAIL_CNT->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(LE_FAIL_CNT, 1, 1, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1005, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        LE_CONNECTION->setText(QCoreApplication::translate("MainWindow", "CONNECTION", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Test LAN Client", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Log..", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "disconnection count", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "5s", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "10s", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "1s", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "no receive count", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "5s", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "10s", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "1s", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "recv success count", nullptr));
        LE_SUCCESS_CNT->setText(QString());
        label_12->setText(QCoreApplication::translate("MainWindow", "recv fail count", nullptr));
        LE_FAIL_CNT->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
