#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QDebug"

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
    ui->widget->setX(d.getX());
    ui->widget->setY(d.getY());

    ui->widget->setZ(d.getZ());
    ui->horizontalSliderZ->setMaximum(d.getZ());
    repaint();

}

void MainWindow::on_pushButtonCutBox_clicked()
{
    boxDialog b;
    b.setModal(true);
    b.exec();
}

void MainWindow::on_ColorButton_clicked()
{
    QColorDialog colorDialog;
    colorDialog.exec();
    //if(colorDialog.Accepted){
        //QColor color=colorDialog.getColor();
        QPalette palette = ui->label_5->palette();
        palette.setColor(ui->label_5->foregroundRole(), colorDialog.selectedColor());
        ui->label_5->setPalette(palette);
    //}
}
