
#ifndef LIBRARIAN_H
#define LIBRARIAN_H

#include <QMainWindow>
#include <QSqlDatabase>
#include <QSqlTableModel>
#include "readlibrarian.h"
#include <QMessageBox>
#include <QDialog>
#include <QLineEdit>
#include <QPushButton>
#include <QSqlQuery>
#include <QSqlError>
#include <QString>
namespace Ui {
class librarian;
}

class librarian : public QMainWindow
{
    Q_OBJECT

public:
    explicit librarian(QWidget *parent = nullptr);
    ~librarian();

private slots:
    void on_btnAdd_clicked();
    void on_btnRemove_clicked();
    void on_tableView_clicked(const QModelIndex &index);
    void on_pushDublicate_clicked(); // Переименовано

private:
    Ui::librarian *ui;
    QSqlDatabase db;
    QSqlTableModel *model;
    int currentRow;
};

#endif // LIBRARIAN_H

