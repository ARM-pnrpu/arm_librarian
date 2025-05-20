
#ifndef READDIARY_H
#define READDIARY_H

#include <QDialog>
#include <QSqlDatabase>
#include <QTableWidget>
#include <QDate>

namespace Ui {
class ReadDiary;
}

class ReadDiary : public QDialog
{
    Q_OBJECT

public:
    explicit ReadDiary(QWidget *parent = nullptr, int userId = -1);
    ~ReadDiary();

private:
    Ui::ReadDiary *ui;
    QSqlDatabase db;
    int userId;

    void loadReadingLogs(); // Функция для загрузки данных в таблицу
};

#endif // READDIARY_H
