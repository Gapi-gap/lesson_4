#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->groupBox->setTitle("группировка");
    ui->rBut_oneButton->setText("Первая радиокнопка");
    ui->rBut_twoButton->setText("Вторая радиокнопка");
    ui->comboBox->addItem("Зима");
    ui->comboBox->addItem("Весна");
    ui->comboBox->addItem("Лето");
    ui->comboBox->addItem("Осень");
    ui->pushButton->setText("Обычная кнопка");
    ui->progressBar->setMinimum(0);
    ui->progressBar->setMaximum(100);
    ui->progressBar->setValue(0);
    ui->pushButton->setCheckable(true);


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    auto value = ui->progressBar->value();
    value+=10;
    if(value > 100)
        value =0;
    ui->progressBar->setValue(value);
}

