/********************************************************************************
** Form generated from reading UI file 'choicelibrarian.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHOICELIBRARIAN_H
#define UI_CHOICELIBRARIAN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ChoiceLibrarian
{
public:
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QLineEdit *lineEdit_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;

    void setupUi(QDialog *ChoiceLibrarian)
    {
        if (ChoiceLibrarian->objectName().isEmpty())
            ChoiceLibrarian->setObjectName("ChoiceLibrarian");
        ChoiceLibrarian->resize(832, 589);
        ChoiceLibrarian->setStyleSheet(QString::fromUtf8("QDialog {\n"
"            background-color: #49678D;\n"
"        }"));
        lineEdit = new QLineEdit(ChoiceLibrarian);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(150, 280, 351, 51));
        lineEdit->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"            background-color:  #6C92AF;\n"
"color: white;\n"
"\n"
"        }"));
        pushButton = new QPushButton(ChoiceLibrarian);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(210, 440, 211, 61));
        QFont font;
        font.setPointSize(14);
        pushButton->setFont(font);
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"            background-color:  #1D1E33;\n"
"\n"
"color: white;\n"
"\n"
"        }"));
        lineEdit_2 = new QLineEdit(ChoiceLibrarian);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(150, 360, 351, 51));
        lineEdit_2->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"            background-color:  #6C92AF;\n"
"color: white;\n"
"\n"
"        }"));
        label = new QLabel(ChoiceLibrarian);
        label->setObjectName("label");
        label->setGeometry(QRect(230, 120, 221, 51));
        QFont font1;
        font1.setPointSize(20);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color: white;\n"
"}"));
        label_2 = new QLabel(ChoiceLibrarian);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(60, 280, 151, 51));
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color: white;\n"
"}"));
        label_3 = new QLabel(ChoiceLibrarian);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(60, 360, 161, 51));
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color: white;\n"
"}"));
        label_4 = new QLabel(ChoiceLibrarian);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(260, 170, 131, 101));

        retranslateUi(ChoiceLibrarian);

        QMetaObject::connectSlotsByName(ChoiceLibrarian);
    } // setupUi

    void retranslateUi(QDialog *ChoiceLibrarian)
    {
        ChoiceLibrarian->setWindowTitle(QCoreApplication::translate("ChoiceLibrarian", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("ChoiceLibrarian", "\320\222\321\205\320\276\320\264", nullptr));
        label->setText(QCoreApplication::translate("ChoiceLibrarian", "\320\220\320\262\321\202\320\276\321\200\320\270\320\267\320\260\321\206\320\270\321\217", nullptr));
        label_2->setText(QCoreApplication::translate("ChoiceLibrarian", "\320\233\320\276\320\263\320\270\320\275", nullptr));
        label_3->setText(QCoreApplication::translate("ChoiceLibrarian", "\320\237\320\260\321\200\320\276\320\273\321\214", nullptr));
        label_4->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ChoiceLibrarian: public Ui_ChoiceLibrarian {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHOICELIBRARIAN_H
