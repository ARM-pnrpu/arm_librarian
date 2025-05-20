
#include "choiceLibrarian.h"
#include "ui_choiceLibrarian.h"
#include <QMessageBox>
#include <QDebug> // Добавлено для отладки

ChoiceLibrarian::ChoiceLibrarian(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ChoiceLibrarian)
{
    ui->setupUi(this);
    QPixmap pixmap("C:/Users/Di/Desktop/arm/free-icon-member-card-3296295.png");
    ui->label_4->setPixmap(pixmap.scaled(100, 100, Qt::KeepAspectRatio));

    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("C:/Users/Di/Desktop/arm/arm.db");

    if (!db.open()) {
        QMessageBox::critical(this, "Ошибка", "Не удалось подключиться к базе данных: " + db.lastError().text());
        this->reject();
    }

    if (!db.isValid()) {
        QMessageBox::critical(this, "Ошибка", "Не удалось подключиться к базе данных.");
        this->reject();
    }
}

ChoiceLibrarian::~ChoiceLibrarian()
{
    delete ui;
}

void ChoiceLibrarian::on_pushButton_clicked()
{
    QString login = ui->lineEdit->text().trimmed();    // поле для логина
    QString password = ui->lineEdit_2->text().trimmed();  // поле для пароля

    if (login.isEmpty() || password.isEmpty()) {
        QMessageBox::warning(this, "Ошибка", "Пожалуйста, введите имя пользователя и пароль.");
        return;
    }

    if (authenticateLibrarian(login, password)) {
        QMessageBox::information(this, "Успех", "Вход выполнен!");
        hide();
        libr = new librarian(this);
        libr->show();
    } else {
        QMessageBox::warning(this, "Ошибка", "Неверное имя пользователя или пароль.");
    }
}

bool ChoiceLibrarian::authenticateLibrarian(const QString &login, const QString &password) {
    QSqlQuery query(db);
    query.prepare("SELECT password FROM users WHERE login = :login AND role = 'библиотекарь'");
    query.bindValue(":login", login);

    if (!query.exec()) {
        qDebug() << "Ошибка выполнения запроса!! " << query.lastError().text() << "\n SQL: " << query.lastQuery();
        return false;
    }

    if (query.next()) {
        QString passwordFromDb = query.value(0).toString(); // Получаем пароль из БД

        if (password == passwordFromDb) {
            qDebug() << "Аутентификация успешна! (Без хеширования)";
            return true; // Пароль верен!
        } else {
            qDebug() << "Неверный пароль! (Без хеширования)";
            return false; // Пароль не верен
        }
    } else {
        qDebug() << "Пользователь не найден или роль не 'библиотекарь'";
        return false;
    }
}
