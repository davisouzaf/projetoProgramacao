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
