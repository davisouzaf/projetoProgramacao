#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButtonDim_clicked()
{
    dimDialog d;
    d.setModal(true);
    d.exec();
}

void MainWindow::on_pushButtonCutBox_clicked()
{
    boxDialog b;
    b.setModal(true);
    b.exec();
}
