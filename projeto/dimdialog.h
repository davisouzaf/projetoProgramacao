#ifndef DIMDIALOG_H
#define DIMDIALOG_H

#include <QDialog>

#include <plotter.h>
namespace Ui {
class dimDialog;
}

class dimDialog : public QDialog
{
    Q_OBJECT

public:
    explicit dimDialog(QWidget *parent = 0);
    ~dimDialog();
    int getX();
    int getY();
    int getZ();

private:
    Ui::dimDialog *ui;
};

#endif // DIMDIALOG_H
