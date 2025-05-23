
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "choicestudent.h"
#include "choicelibrarian.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_student_clicked();
    void on_pushButton_2_clicked();

private:
    Ui::MainWindow *ui;
    ChoiceStudent *stud;
    ChoiceLibrarian *libr;

};
#endif // MAINWINDOW_H
