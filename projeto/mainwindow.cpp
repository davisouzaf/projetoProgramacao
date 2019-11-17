#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->widget,
            SIGNAL(mouseX(int)),
            ui->lcdNumber,
            SLOT(display(int)));

    connect(ui->widget,
            SIGNAL(mouseY(int)),
            ui->lcdNumber_2,
            SLOT(display(int)));

    connect(ui->actionExit, &QAction::triggered,
            this, &MainWindow::finaliza);

    connect(ui->pushButtonPutBox, SIGNAL(clicked()), this, SLOT(pushButtonCutBox_clicked()));
    connect(ui->pushButtonCutBox, SIGNAL(clicked()),this, SLOT(pushButtonCutBox_clicked()));
    connect(ui->pushButtonPutSphere, SIGNAL(clicked()), this, SLOT(pushButtonPutSphere_clicked()));
    connect(ui->pushButtonCutSphere, SIGNAL(clicked()), this, SLOT(pushButtonPutSphere_clicked()));
    connect(ui->pushButtonPutEllip, SIGNAL(clicked()), this, SLOT(pushButtonPutEllip_clicked()));
    connect(ui->pushButtonCutEllip, SIGNAL(clicked()), this, SLOT(pushButtonPutEllip_clicked()));



}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButtonDim_clicked()
{
    dimDialog d;
    //d.setModal(true);
    if(d.exec()==QDialog::Accepted && d.getX()!=0 && d.getY()!=0 && d.getZ()!=0){
    ui->widget->setX(d.getX());
    ui->widget->setY(d.getY());
    ui->widget->setZ(d.getZ());
    ui->horizontalSliderZ->setMaximum(d.getZ());
    repaint();
    }else if (d.getX()==0 || d.getY()==0 || d.getZ()==0) {
        QMessageBox::information(this, tr("Erro"),tr("\nvalores inválidos, tente outra vez!\n"));
    }
}

void MainWindow::pushButtonCutBox_clicked()
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
        ui->verticalSlider->setValue(colorDialog.selectedColor().red());
        ui->verticalSlider_2->setValue(colorDialog.selectedColor().green());
        ui->verticalSlider_3->setValue(colorDialog.selectedColor().blue());
    //}

}

void MainWindow::finaliza()
{
    close();
}

void MainWindow::pushButtonPutSphere_clicked()
{
    SphereDialog s;
    s.setModal(true);
    s.exec();
}

void MainWindow::pushButtonPutEllip_clicked()
{
    EllispoidDialog e;
    e.setModal(true);
    e.exec();
}
