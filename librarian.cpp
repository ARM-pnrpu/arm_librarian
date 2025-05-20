
#include "librarian.h"
#include "ui_librarian.h"
#include <QDebug>

#include "readlibrarian.h"

    librarian::librarian(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::librarian)
{
    ui->setupUi(this);
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("C:/Users/Di/Desktop/arm/arm.db");

    if (db.open()) {
        ui->statusbar->showMessage("Вы успешно подключились к базе данных! " + db.databaseName());

        model = new QSqlTableModel(this, db);
        model->setTable("users");
        model->setFilter("role != 'библиотекарь'");

        model->select();
        ui->tableView->setModel(model);

        model->setHeaderData(1, Qt::Horizontal, QObject::tr("Роль"));
        model->setHeaderData(2, Qt::Horizontal, QObject::tr("Логин"));
        model->setHeaderData(3, Qt::Horizontal, QObject::tr("Пароль"));
        model->setHeaderData(5, Qt::Horizontal, QObject::tr("Фамилия"));
        model->setHeaderData(6, Qt::Horizontal, QObject::tr("Класс"));
        model->setHeaderData(4, Qt::Horizontal, QObject::tr("Имя"));

        ui->tableView->setSortingEnabled(true);
        ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);

        ui->tableView->setColumnHidden(0, true);   // Скрыть Id

        ui->tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
    } else {
        ui->statusbar->showMessage("При подключении базы данных произошла ошибка: " + db.lastError().databaseText());
        qDebug() << "При подключении базы данных произошла ошибка: " << db.lastError().text();
    }


}

librarian::~librarian()
{
    delete ui;
}

void librarian::on_btnAdd_clicked()
{
    model->insertRow(model->rowCount());

}

void librarian::on_btnRemove_clicked()
{
    model->removeRow(ui->tableView->currentIndex().row());
    model->select();

}

void librarian::on_tableView_clicked(const QModelIndex &index)
{
    currentRow = index.row();
}

void librarian::on_pushDublicate_clicked() {
    qDebug() << "on_pushDublicate_clicked() called";
    if (currentRow >= 0) {
        QModelIndex index = model->index(currentRow, 0);
        QVariant userIdData = model->data(index);
        int userId = userIdData.toInt();


        ::ReadLibrarian *readlibrarian = new ::ReadLibrarian(this, userId);
        readlibrarian->show();
    } else {
        QMessageBox::warning(this, "Ошибка", "Не был выбран ученик");
    }
}
