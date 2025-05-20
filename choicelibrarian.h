
#ifndef CHOICELIBRARIAN_H
#define CHOICELIBRARIAN_H

#include <QDialog>
#include <QLineEdit>
#include <QPushButton>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QString>
#include <QMessageBox>
#include "librarian.h"

namespace Ui {
class ChoiceLibrarian;
}

class ChoiceLibrarian : public QDialog {
    Q_OBJECT

public:
    explicit ChoiceLibrarian(QWidget *parent = nullptr);
    ~ChoiceLibrarian() override;

private slots:
    void on_pushButton_clicked();

private:
    Ui::ChoiceLibrarian *ui;
    librarian *libr;

    QSqlDatabase db;
    bool authenticateLibrarian(const QString &username, const QString &password);
};

#endif // CHOICELIBRARIAN_H
