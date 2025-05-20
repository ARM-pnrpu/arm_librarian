/********************************************************************************
** Form generated from reading UI file 'choicestudent.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHOICESTUDENT_H
#define UI_CHOICESTUDENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ChoiceStudent
{
public:
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_3;
    QPushButton *pushButton;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;

    void setupUi(QDialog *ChoiceStudent)
    {
        if (ChoiceStudent->objectName().isEmpty())
            ChoiceStudent->setObjectName("ChoiceStudent");
        ChoiceStudent->resize(809, 575);
        QFont font;
        font.setPointSize(16);
        ChoiceStudent->setFont(font);
        ChoiceStudent->setStyleSheet(QString::fromUtf8("QDialog {\n"
"            background-color: #49678D;\n"
"        }"));
        lineEdit = new QLineEdit(ChoiceStudent);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(150, 280, 351, 51));
        lineEdit->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"            background-color:  #6C92AF;\n"
"\n"
"color: white;\n"
"\n"
"        }"));
        lineEdit_3 = new QLineEdit(ChoiceStudent);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setGeometry(QRect(150, 340, 351, 51));
        lineEdit_3->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"            background-color:  #6C92AF;\n"
"\n"
"color: white;\n"
"\n"
"        }"));
        pushButton = new QPushButton(ChoiceStudent);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(200, 430, 211, 61));
        QFont font1;
        font1.setPointSize(14);
        pushButton->setFont(font1);
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"            background-color:  #1D1E33;\n"
"color: white;\n"
"\n"
"        }"));
        label = new QLabel(ChoiceStudent);
        label->setObjectName("label");
        label->setGeometry(QRect(220, 90, 301, 71));
        QFont font2;
        font2.setPointSize(20);
        label->setFont(font2);
        label->setStyleSheet(QString::fromUtf8("QLabel {\n"
"color: white;\n"
"}"));
        label_2 = new QLabel(ChoiceStudent);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(50, 280, 121, 51));
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"color: white;\n"
"}"));
        label_3 = new QLabel(ChoiceStudent);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(40, 340, 121, 51));
        label_3->setFont(font1);
        label_3->setStyleSheet(QString::fromUtf8("QLabel {\n"
"color: white;\n"
"}"));
        label_4 = new QLabel(ChoiceStudent);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(250, 150, 151, 101));

        retranslateUi(ChoiceStudent);

        QMetaObject::connectSlotsByName(ChoiceStudent);
    } // setupUi

    void retranslateUi(QDialog *ChoiceStudent)
    {
        ChoiceStudent->setWindowTitle(QCoreApplication::translate("ChoiceStudent", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("ChoiceStudent", "\320\222\321\205\320\276\320\264", nullptr));
        label->setText(QCoreApplication::translate("ChoiceStudent", "\320\220\320\262\321\202\320\276\321\200\320\270\320\267\320\260\321\206\320\270\321\217", nullptr));
        label_2->setText(QCoreApplication::translate("ChoiceStudent", "\320\233\320\276\320\263\320\270\320\275", nullptr));
        label_3->setText(QCoreApplication::translate("ChoiceStudent", "\320\237\320\260\321\200\320\276\320\273\321\214", nullptr));
        label_4->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ChoiceStudent: public Ui_ChoiceStudent {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHOICESTUDENT_H
