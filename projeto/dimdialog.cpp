#include "dimdialog.h"
#include "ui_dimdialog.h"

dimDialog::dimDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dimDialog)
{
    ui->setupUi(this);
}

dimDialog::~dimDialog()
{
    delete ui;
}

int dimDialog::getX()
{
    return ui->horizontalSliderX->value();
}

int dimDialog::getY()
{
    return ui->horizontalSliderY->value();
}

int dimDialog::getZ()
{
    return ui->horizontalSliderZ->value();
}
