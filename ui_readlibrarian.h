/********************************************************************************
** Form generated from reading UI file 'readlibrarian.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_READLIBRARIAN_H
#define UI_READLIBRARIAN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_ReadLibrarian
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QTableView *tableView;
    QPushButton *saveButton;

    void setupUi(QDialog *ReadLibrarian)
    {
        if (ReadLibrarian->objectName().isEmpty())
            ReadLibrarian->setObjectName("ReadLibrarian");
        ReadLibrarian->resize(963, 580);
        ReadLibrarian->setStyleSheet(QString::fromUtf8("QDialog {\n"
"            background-color:#49678D;\n"
"        }"));
        label = new QLabel(ReadLibrarian);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 0, 331, 61));
        QFont font;
        font.setPointSize(16);
        font.setBold(false);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("QLabel {\n"
"color: white;\n"
"}"));
        pushButton = new QPushButton(ReadLibrarian);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(730, 60, 111, 81));
        QFont font1;
        font1.setPointSize(22);
        pushButton->setFont(font1);
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"            background-color: #1D1E33;\n"
"			color: white;\n"
"\n"
"        }"));
        tableView = new QTableView(ReadLibrarian);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(0, 50, 711, 531));
        tableView->setStyleSheet(QString::fromUtf8(""));
        saveButton = new QPushButton(ReadLibrarian);
        saveButton->setObjectName("saveButton");
        saveButton->setGeometry(QRect(730, 150, 111, 81));
        QFont font2;
        font2.setPointSize(12);
        saveButton->setFont(font2);
        saveButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"            background-color: #1D1E33;\n"
"			color: white;\n"
"        }"));

        retranslateUi(ReadLibrarian);

        QMetaObject::connectSlotsByName(ReadLibrarian);
    } // setupUi

    void retranslateUi(QDialog *ReadLibrarian)
    {
        ReadLibrarian->setWindowTitle(QCoreApplication::translate("ReadLibrarian", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("ReadLibrarian", "\320\247\320\270\321\202\320\260\321\202\320\265\320\273\321\214\321\201\320\272\320\270\320\271 \320\264\320\275\320\265\320\262\320\275\320\270\320\272", nullptr));
        pushButton->setText(QCoreApplication::translate("ReadLibrarian", "+", nullptr));
        saveButton->setText(QCoreApplication::translate("ReadLibrarian", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ReadLibrarian: public Ui_ReadLibrarian {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_READLIBRARIAN_H
