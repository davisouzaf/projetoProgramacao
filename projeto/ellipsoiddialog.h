#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>

namespace Ui {
class EllipsoidDialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = nullptr);
    ~Dialog();

private:
    Ui::EllipsoidDialog *ui;
};

#endif // DIALOG_H
