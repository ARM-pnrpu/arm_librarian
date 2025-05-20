
#include "choicestudent.h"
#include "ui_choicestudent.h"
#include <QMessageBox>
#include <QDebug>

ChoiceStudent::ChoiceStudent(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ChoiceStudent)
{
    ui->setupUi(this);

    QPixmap pixmap("C:/Users/Di/Desktop/arm/free-icon-member-card-3296295.png");
    ui->label_4->setPixmap(pixmap.scaled(100, 100, Qt::KeepAspectRatio));

    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("C:/Users/Di/Desktop/arm/arm.db");
    userId = -1;

}

ChoiceStudent::~ChoiceStudent()
{
    delete ui;
    if (stud2) {
        delete stud2;
    }
}

void ChoiceStudent::on_pushButton_clicked()
{
    QString login = ui->lineEdit->text().trimmed();
    QString password = ui->lineEdit_3->text().trimmed();

    if (login.isEmpty() || password.isEmpty()) {
        QMessageBox::warning(this, "Ошибка", "Пожалуйста, введите имя пользователя и пароль.");
        return;
    }

    QSqlDatabase db = QSqlDatabase::database();
    if (!db.isOpen()) {
        QMessageBox::critical(this, "Ошибка", "База данных не подключена.");
        return;
    }

    QSqlQuery query(db);
    query.prepare("SELECT id FROM users WHERE login = :login AND password = :password AND role = 'ученик'");
    query.bindValue(":login", login);
    query.bindValue(":password", password);

    if (!query.exec()) {
        qDebug() << "Ошибка выполнения запроса: " << query.lastError().text();
        QMessageBox::critical(this, "Ошибка", "Ошибка при выполнении запроса к базе данных.");
        return;
    }

    if (query.next()) {
        userId = query.value(0).toInt();
        qDebug() << "Авторизация успешна. ID пользователя: " << userId;

        if(userId != -1)
        {
            hide();
            stud2 = new ReadDiary(this, userId);
            stud2->show();
        }
        else
        {
            QMessageBox::warning(this, "Ошибка", "Не удалось получить ID пользователя.");
        }
    } else {
        QMessageBox::warning(this, "Ошибка", "Неверное имя пользователя или пароль.");
    }
}

