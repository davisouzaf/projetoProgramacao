#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow){
    ui->setupUi(this);
    connect(ui->widget,
            SIGNAL(mouseX(int)),
            ui->lcdNumber,
            SLOT(display(int)));
    connect(ui->widget,
            SIGNAL(mouseY(int)),
            ui->lcdNumber_2,
            SLOT(display(int)));
    connect(ui->pushButton_2,
            SIGNAL(on_pushButton_2_clicked()),
            ui->widget,
            SLOT(setdrawmodule(1)));
    connect(ui->horizontalSliderZ,
            SIGNAL(on_horizontalSliderZ_valueChanged(int)),
            ui->widget,
            SLOT(setplan())
            );
    //QButtonGroup qbg(ui->pushButtonCutBox);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButtonDim_clicked()
{
    dimDialog d;
    //d.setModal(true);
    if(d.exec()==QDialog::Accepted){
        if(d.getX()!=0 && d.getY()!=0 && d.getZ()!=0){
            ui->widget->setX(d.getX());
            ui->widget->setY(d.getY());
            ui->widget->setZ(d.getZ());
            ui->horizontalSliderZ->setMaximum(d.getZ());
            ui->widget->scpt->~Sculptor();
            ui->widget->scpt=new Sculptor(d.getX(),d.getY(),d.getZ());
            repaint();
        }else{
            QMessageBox::information(this, tr("Erro"),tr("\nvalores inválidos, tente outra vez!\n"));
        }
    }
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
    ui->verticalSlider->setValue(colorDialog.selectedColor().red());
    ui->verticalSlider_2->setValue(colorDialog.selectedColor().green());
    ui->verticalSlider_3->setValue(colorDialog.selectedColor().blue());
    ui->widget->selectedcolor=colorDialog.selectedColor();
    //}

}

void MainWindow::on_pushButton_2_clicked()
{
    ui->widget->setdrawmodule(1);

}

void MainWindow::on_actionAbout_triggered()
{
    QMessageBox::information(this, tr("Sobre"),tr("\All of the icons utilized at this aplication is under creative commons 3.0!\n"));
}

void MainWindow::on_pushButton_clicked()
{
    ui->widget->setdrawmodule(2);
}

void MainWindow::on_horizontalSliderZ_valueChanged(int value)
{
    ui->widget->setplan(value);
    repaint();
}

void MainWindow::on_actionSave_File_triggered(){
    QString qs=QFileDialog::getSaveFileName();
    qs=qs+".off";
    qDebug()<<qs;

    ui->widget->scpt->writeOFF(qs.toStdString().c_str());
}

void MainWindow::on_actionView_solid_triggered()
{
    QString qs=QFileDialog::getSaveFileName();
    qs=qs+".off";
    QString command="meshlab "+qs;
    qDebug()<<command;
    ui->widget->scpt->writeOFF(qs.toStdString().c_str());
    system(command.toStdString().c_str());
}

void MainWindow::on_pushButtonPutSphere_clicked()
{
    SphereDialog sd;
    if(sd.exec()==QDialog::Accepted && sd.getRadius()!=0){
        ui->widget->setRadius(sd.getRadius());
        ui->widget->setdrawmodule(5);
    }else {
        QMessageBox::information(this, tr("Erro"),tr("\nvalores inválidos, tente outra vez!\n"));
    }
}

void MainWindow::on_pushButtonCurSphere_clicked()
{
    SphereDialog sd;
    if(sd.exec()==QDialog::Accepted && sd.getRadius()!=0){
        ui->widget->setRadius(sd.getRadius());
        ui->widget->setdrawmodule(6);
    }else if(sd.getRadius()==0){
        QMessageBox::information(this, tr("Erro"),tr("\nvalores inválidos, tente outra vez!\n"));
    }
}

void MainWindow::on_pushButtonPutBox_clicked()
{
    boxDialog bd;
    if(bd.exec()==QDialog::Accepted){
        if(bd.getX()!=0 && bd.getY()!=0 && bd.getZ()!=0){
            ui->widget->setBoxwidth(bd.getX());
            ui->widget->setBoxheight(bd.getY());
            ui->widget->setBoxdepth(bd.getZ());
            ui->widget->setdrawmodule(3);
        }else {
            QMessageBox::information(this, tr("Erro"),tr("\nvalores inválidos, tente outra vez!\n"));
        }
    }
}

void MainWindow::on_pushButtonPutEllip_clicked()
{
    EllipsoidDialog ed;
    if(ed.exec()==QDialog::Accepted){
        if(ed.getXRadius()!=0 && ed.getYRadius()!=0 && ed.getZRadius()!=0){
            ui->widget->setXRadius(ed.getXRadius());
            ui->widget->setYRadius(ed.getYRadius());
            ui->widget->setZRadius(ed.getZRadius());
            ui->widget->setdrawmodule(7);
        }else {
            QMessageBox::information(this, tr("Erro"),tr("\nvalores inválidos, tente outra vez!\n"));
        }
    }
}

void MainWindow::on_pushButtonCutEllip_clicked()
{
    EllipsoidDialog ed;
    if(ed.exec()==QDialog::Accepted){
        if(ed.getXRadius()!=0 && ed.getYRadius()!=0 && ed.getZRadius()!=0){
            ui->widget->setXRadius(ed.getXRadius());
            ui->widget->setYRadius(ed.getYRadius());
            ui->widget->setZRadius(ed.getZRadius());
            ui->widget->setdrawmodule(8);
        }else {
            QMessageBox::information(this, tr("Erro"),tr("\nvalores inválidos, tente outra vez!\n"));
        }
    }
}
