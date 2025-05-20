/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *student;
    QPushButton *pushButton_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(778, 600);
        QFont font;
        font.setPointSize(7);
        MainWindow->setFont(font);
        MainWindow->setStyleSheet(QString::fromUtf8("QMainWindow {\n"
"background-color: #49678D;\n"
"}\n"
""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setStyleSheet(QString::fromUtf8("QMainWindow {\n"
"            background-color: #6C92AF;\n"
"        }"));
        student = new QPushButton(centralwidget);
        student->setObjectName("student");
        student->setGeometry(QRect(90, 410, 161, 121));
        student->setMinimumSize(QSize(0, 0));
        student->setMaximumSize(QSize(16777215, 16777215));
        QFont font1;
        font1.setPointSize(14);
        student->setFont(font1);
        student->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"            background-color: #1D1E33;\n"
"        }"));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(560, 410, 161, 121));
        QFont font2;
        font2.setPointSize(18);
        pushButton_2->setFont(font2);
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"            background-color: #1D1E33;\n"
"        }"));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(280, 100, 451, 81));
        QFont font3;
        font3.setPointSize(20);
        label->setFont(font3);
        label->setStyleSheet(QString::fromUtf8("QLabel {\n"
"color: white;\n"
"}"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(140, 540, 81, 20));
        QFont font4;
        font4.setPointSize(13);
        label_2->setFont(font4);
        label_2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"color: white;\n"
"}"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(590, 540, 151, 20));
        label_3->setFont(font4);
        label_3->setStyleSheet(QString::fromUtf8("QLabel {\n"
"color: white;\n"
"}"));
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        student->setText(QString());
        pushButton_2->setText(QString());
        label->setText(QCoreApplication::translate("MainWindow", "\320\240\320\276\320\273\321\214 \320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\321\217", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\320\243\321\207\320\265\320\275\320\270\320\272", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\320\221\320\270\320\261\320\273\320\270\320\276\321\202\320\265\320\272\320\260\321\200\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
