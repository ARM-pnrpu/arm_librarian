
#ifndef CHOICESTUDENT_H
#define CHOICESTUDENT_H

#include <QDialog>
#include <QLineEdit>
#include <QPushButton>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QString>
#include <QMessageBox>
#include <QDialog>
#include "readdiary.h"

namespace Ui {
class ChoiceStudent;
}

class ChoiceStudent : public QDialog
{
    Q_OBJECT

public:
    explicit ChoiceStudent(QWidget *parent = nullptr);
    ~ChoiceStudent();

private slots:
    void on_pushButton_clicked();

private:
    Ui::ChoiceStudent *ui;
    ReadDiary *stud2;
    int userId;
    QSqlDatabase db;
};

#endif // CHOICESTUDENT_H
