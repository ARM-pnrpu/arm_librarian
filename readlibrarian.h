#ifndef READLIBRARIAN_H
#define READLIBRARIAN_H

#include <QDialog>
#include <QSqlDatabase>
#include <QTableWidget>
#include <QDate>
#include <QSqlRelationalTableModel>
#include <QSqlRelationalDelegate>

namespace Ui {
class ReadLibrarian;
}

class ReadLibrarian : public QDialog
{
    Q_OBJECT

public:
    explicit ReadLibrarian(QWidget *parent = nullptr, int userId = -1);
    ~ReadLibrarian();

private slots:
    void on_pushButton_clicked(); // Кнопка "Добавить"
    void on_saveButton_clicked(); // Кнопка "Сохранить"

private:
    Ui::ReadLibrarian *ui;
    QSqlDatabase db;
    int userId;
    QSqlRelationalTableModel *model;
};

#endif // READLIBRARIAN_H
