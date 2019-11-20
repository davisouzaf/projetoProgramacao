#include "ellipsoiddialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EllipsoidDialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}
