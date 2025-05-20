/********************************************************************************
** Form generated from reading UI file 'librarian.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LIBRARIAN_H
#define UI_LIBRARIAN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_librarian
{
public:
    QWidget *centralwidget;
    QTableView *tableView;
    QLabel *label;
    QPushButton *btnAdd;
    QPushButton *btnRemove;
    QPushButton *pushDublicate;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *librarian)
    {
        if (librarian->objectName().isEmpty())
            librarian->setObjectName("librarian");
        librarian->resize(1125, 714);
        librarian->setStyleSheet(QString::fromUtf8("QMainWindow {\n"
"            background-color:#49678D;\n"
"        }"));
        centralwidget = new QWidget(librarian);
        centralwidget->setObjectName("centralwidget");
        tableView = new QTableView(centralwidget);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(0, 50, 781, 561));
        tableView->setStyleSheet(QString::fromUtf8(""));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 0, 291, 51));
        QFont font;
        font.setPointSize(18);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("QLabel {\n"
"color: white;\n"
"}"));
        btnAdd = new QPushButton(centralwidget);
        btnAdd->setObjectName("btnAdd");
        btnAdd->setGeometry(QRect(850, 100, 231, 81));
        QFont font1;
        font1.setPointSize(14);
        btnAdd->setFont(font1);
        btnAdd->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"            background-color: #1D1E33;\n"
"\n"
"color: white;\n"
"\n"
"        }"));
        btnRemove = new QPushButton(centralwidget);
        btnRemove->setObjectName("btnRemove");
        btnRemove->setGeometry(QRect(850, 210, 231, 81));
        btnRemove->setFont(font1);
        btnRemove->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"            background-color: #1D1E33;\n"
"\n"
"color: white;\n"
"\n"
"        }"));
        pushDublicate = new QPushButton(centralwidget);
        pushDublicate->setObjectName("pushDublicate");
        pushDublicate->setGeometry(QRect(0, 610, 781, 81));
        QFont font2;
        font2.setPointSize(15);
        pushDublicate->setFont(font2);
        pushDublicate->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"            background-color: #1D1E33;\n"
"\n"
"color: white;\n"
"\n"
"        }"));
        librarian->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(librarian);
        statusbar->setObjectName("statusbar");
        librarian->setStatusBar(statusbar);

        retranslateUi(librarian);

        QMetaObject::connectSlotsByName(librarian);
    } // setupUi

    void retranslateUi(QMainWindow *librarian)
    {
        librarian->setWindowTitle(QCoreApplication::translate("librarian", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("librarian", "\320\222\321\213\320\261\320\265\321\200\320\270\321\202\320\265 \321\203\321\207\320\265\320\275\320\270\320\272\320\260", nullptr));
        btnAdd->setText(QCoreApplication::translate("librarian", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \321\203\321\207\320\265\320\275\320\270\320\272\320\260", nullptr));
        btnRemove->setText(QCoreApplication::translate("librarian", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \321\203\321\207\320\265\320\275\320\270\320\272\320\260", nullptr));
        pushDublicate->setText(QCoreApplication::translate("librarian", "\320\237\320\265\321\200\320\265\321\205\320\276\320\264 \320\272 \321\207\320\270\321\202\320\260\321\202\320\265\320\273\321\214\321\201\320\272\320\276\320\274\321\203 \320\264\320\275\320\265\320\262\320\275\320\270\320\272\321\203", nullptr));
    } // retranslateUi

};

namespace Ui {
    class librarian: public Ui_librarian {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LIBRARIAN_H
