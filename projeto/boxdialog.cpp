#include "boxdialog.h"
#include "ui_boxdialog.h"

boxDialog::boxDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::boxDialog)
{
    ui->setupUi(this);
}

boxDialog::~boxDialog()
{
    delete ui;
}

int boxDialog::getX(){
    return ui->SliderX->value();
}
int boxDialog::getY(){
    return ui->SliderY->value();
}
int boxDialog::getZ(){
    return ui->SliderZ->value();
}
