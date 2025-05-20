#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPixmap>
#include <QIcon>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap pixmap("C:/Users/Di/Desktop/arm/free-icon-reading-405704.png");
    if (!pixmap.isNull()) {
        QIcon ButtonIcon(pixmap);
        ui->student->setIcon(ButtonIcon);
        ui->student->setIconSize(QSize(100, 100));        // Размер иконки
    } else {
        qDebug() << "Не удалось загрузить изображение для кнопки student";
    }
    QPixmap librarianPixmap("C:/Users/Di/Desktop/arm/free-icon-studying-6309749.png");
    if (!librarianPixmap.isNull()) {
        QIcon librarianIcon(librarianPixmap);
        ui->pushButton_2->setIcon(librarianIcon);
        ui->pushButton_2->setIconSize(QSize(100, 100));
        ui->pushButton_2->setText("");
    } else {
        qDebug() << "Не удалось загрузить иконку для кнопки pushButton_2";
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_student_clicked()
{
    hide();
    ChoiceStudent* stud = new ChoiceStudent(this);
    stud->show();
}


void MainWindow::on_pushButton_2_clicked()
{
    hide();
    ChoiceLibrarian* libr = new ChoiceLibrarian(this);
    libr->show();

}

