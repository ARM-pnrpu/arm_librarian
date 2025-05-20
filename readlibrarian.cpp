#include "readlibrarian.h"
#include "ui_readlibrarian.h"
#include <QDebug>
#include <QSqlError>
#include <QSqlQuery>
#include <QMessageBox>
#include <QSqlRelationalTableModel>
#include <QSqlRelationalDelegate>
#include <QDate>

ReadLibrarian::ReadLibrarian(QWidget *parent, int userId) :
    QDialog(parent),
    ui(new Ui::ReadLibrarian),
    userId(userId),
    model(nullptr)
{
    ui->setupUi(this);

    model = new QSqlRelationalTableModel(this);
    model->setTable("reading_logs");

    model->setRelation(model->fieldIndex("book_id"), QSqlRelation("books", "id", "name"));

    model->setFilter(QString("user_id = %1").arg(userId));
    model->select();

    // Настраиваем заголовки столбцов
    model->setHeaderData(model->fieldIndex("name"), Qt::Horizontal, tr("Книга"));
    model->setHeaderData(model->fieldIndex("assigned_date"), Qt::Horizontal, tr("Дата выдачи"));
    model->setHeaderData(model->fieldIndex("due_date"), Qt::Horizontal, tr("Срок сдачи"));
    model->setHeaderData(model->fieldIndex("status"), Qt::Horizontal, tr("Статус"));
    model->setHeaderData(model->fieldIndex("date_read"), Qt::Horizontal, tr("Дата прочтения"));

    // Скрываем технические столбцы
    ui->tableView->setModel(model);
    ui->tableView->hideColumn(model->fieldIndex("id"));
    ui->tableView->hideColumn(model->fieldIndex("user_id"));

    ui->tableView->setEditTriggers(QAbstractItemView::DoubleClicked | QAbstractItemView::EditKeyPressed);
    ui->tableView->setItemDelegate(new QSqlRelationalDelegate(ui->tableView));

    ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
}

ReadLibrarian::~ReadLibrarian()
{
    delete ui;
    delete model;
}

void ReadLibrarian::on_pushButton_clicked() {
    if (!model) {
        QMessageBox::warning(this, "Внимание", "Модель таблицы не инициализирована.");
        return;
    }

    int row = model->rowCount();
    if (!model->insertRow(row)) {
        qDebug() << "Ошибка вставки строки: " << model->lastError().text();
        QMessageBox::critical(this, "Ошибка", "Не удалось вставить строку: " + model->lastError().text());
        return;
    }

    model->setData(model->index(row, model->fieldIndex("user_id")), userId);

    ui->tableView->selectRow(row);
    ui->tableView->edit(model->index(row, model->fieldIndex("book_id")));

}

void ReadLibrarian::on_saveButton_clicked() {
    if (!model) {
        QMessageBox::warning(this, "Внимание", "Модель таблицы не инициализирована.");
        return;
    }

    if (!model->submitAll()) {
        qDebug() << "Ошибка при сохранении изменений: " << model->lastError().text();
        QMessageBox::critical(this, "Ошибка", "Не удалось сохранить изменения в базе данных: " + model->lastError().text());
    } else {
        QMessageBox::information(this, "Успех", "Изменения успешно сохранены.");
    }
}
