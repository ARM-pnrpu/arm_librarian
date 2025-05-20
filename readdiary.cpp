
#include "readdiary.h"
#include "ui_readdiary.h"
#include <QDebug>
#include <QSqlError>
#include <QSqlQuery>
#include <QDebug>
ReadDiary::ReadDiary(QWidget *parent, int userId) :
    QDialog(parent),
    ui(new Ui::ReadDiary),
    userId(userId)
{
    ui->setupUi(this);
    qDebug() << "ReadDiary создан для пользователя с ID: " << userId;

    // Настраиваем таблицу
    ui->tableWidget->setColumnCount(5);
    ui->tableWidget->setHorizontalHeaderLabels(QStringList() << "Книга" << "Дата выдачи" << "Дата возврата" << "Статус" << "Дата прочтения");
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    loadReadingLogs();
}

ReadDiary::~ReadDiary()
{
    delete ui;
}
void ReadDiary::loadReadingLogs()
{
    QSqlDatabase db = QSqlDatabase::database();
    if (!db.isOpen()) {
        qDebug() << "База данных не подключена в ReadDiary!";
        return;
    }

    QSqlQuery query(db);
    query.prepare("SELECT b.name, rl.assigned_date, rl.due_date, rl.status, rl.date_read "
                  "FROM reading_logs rl "
                  "JOIN books b ON rl.book_id = b.id "
                  "WHERE rl.user_id = :userId");
    query.bindValue(":userId", userId);

    if (!query.exec()) {
        qDebug() << "Ошибка выполнения запроса в ReadDiary: " << query.lastError().text();
        qDebug() << "Запрос: " << query.lastQuery();
        return;
    }

    int row = 0;
    ui->tableWidget->setRowCount(0);
    while (query.next()) {
        ui->tableWidget->insertRow(row);

        QString bookName = query.value(0).toString();
        QDate assignedDate = query.value(1).toDate();
        QDate dueDate = query.value(2).toDate();
        QString status = query.value(3).toString();
        QDate dateRead = query.value(4).toDate();

        QString assignedDateString = assignedDate.isValid() ? assignedDate.toString("dd.MM.yyyy") : "";
        QString dueDateString = dueDate.isValid() ? dueDate.toString("dd.MM.yyyy") : "";
        QString dateReadString = dateRead.isValid() ? dateRead.toString("dd.MM.yyyy") : "";

        QList<QTableWidgetItem*> items;
        items << new QTableWidgetItem(bookName)
              << new QTableWidgetItem(assignedDateString)
              << new QTableWidgetItem(dueDateString)
              << new QTableWidgetItem(status)
              << new QTableWidgetItem(dateReadString);

        for (int col = 0; col < items.size(); ++col) {
            items[col]->setFlags(items[col]->flags() & ~Qt::ItemIsEditable);
            ui->tableWidget->setItem(row, col, items[col]);
        }

        row++;
    }
}
