/********************************************************************************
** Form generated from reading UI file 'readdiary.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_READDIARY_H
#define UI_READDIARY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_ReadDiary
{
public:
    QTableWidget *tableWidget;
    QLabel *label;

    void setupUi(QDialog *ReadDiary)
    {
        if (ReadDiary->objectName().isEmpty())
            ReadDiary->setObjectName("ReadDiary");
        ReadDiary->resize(640, 565);
        ReadDiary->setStyleSheet(QString::fromUtf8("QDialog {\n"
"            background-color:#49678D;\n"
"        }"));
        tableWidget = new QTableWidget(ReadDiary);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(-10, 50, 651, 521));
        tableWidget->setStyleSheet(QString::fromUtf8(""));
        label = new QLabel(ReadDiary);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 0, 261, 61));
        QFont font;
        font.setPointSize(15);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("QLabel {\n"
"color: white;\n"
"}"));

        retranslateUi(ReadDiary);

        QMetaObject::connectSlotsByName(ReadDiary);
    } // setupUi

    void retranslateUi(QDialog *ReadDiary)
    {
        ReadDiary->setWindowTitle(QCoreApplication::translate("ReadDiary", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("ReadDiary", "\320\247\320\270\321\202\320\260\321\202\320\265\320\273\321\214\321\201\320\272\320\270\320\271 \320\264\320\275\320\265\320\262\320\275\320\270\320\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ReadDiary: public Ui_ReadDiary {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_READDIARY_H
