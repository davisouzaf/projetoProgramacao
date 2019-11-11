#ifndef BOXDIALOG_H
#define BOXDIALOG_H

#include <QDialog>

namespace Ui {
class boxDialog;
}

class boxDialog : public QDialog
{
    Q_OBJECT

public:
    explicit boxDialog(QWidget *parent = nullptr);
    ~boxDialog();

    int getX();
    int getY();
    int getZ();
private:
    Ui::boxDialog *ui;
};

#endif // BOXDIALOG_H
