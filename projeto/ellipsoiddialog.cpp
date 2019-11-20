#include "ellipsoiddialog.h"
#include "ui_ellipsoiddialog.h"

EllipsoidDialog::EllipsoidDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EllipsoidDialog)
{
    ui->setupUi(this);
}

int EllipsoidDialog::getXRadius()
{
    return ui->horizontalSlider->value();
}

int EllipsoidDialog::getYRadius()
{
    return ui->horizontalSlider_2->value();
}

int EllipsoidDialog::getZRadius()
{
    return ui->horizontalSlider_3->value();
}

EllipsoidDialog::~EllipsoidDialog()
{
    delete ui;
}
