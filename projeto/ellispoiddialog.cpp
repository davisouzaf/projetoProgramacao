#include "ellispoiddialog.h"
#include "ui_ellispoiddialog.h"

EllispoidDialog::EllispoidDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EllispoidDialog)
{
    ui->setupUi(this);
}

EllispoidDialog::~EllispoidDialog()
{
    delete ui;
}

int EllispoidDialog::getRx()
{
    return ui->XSlider->value();
}

int EllispoidDialog::getRy()
{
    return ui->YSlider->value();
}

int EllispoidDialog::getRz()
{
    return ui->ZSlider->value();
}
