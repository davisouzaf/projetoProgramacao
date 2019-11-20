#ifndef ELLIPSOIDDIALOG_H
#define ELLIPSOIDDIALOG_H

#include <QDialog>

namespace Ui {
class EllipsoidDialog;
}

class EllipsoidDialog : public QDialog
{
    Q_OBJECT

public:
    explicit EllipsoidDialog(QWidget *parent = nullptr);
    int getXRadius();
    int getYRadius();
    int getZRadius();
    ~EllipsoidDialog();

private:
    Ui::EllipsoidDialog *ui;
};

#endif // ELLIPSOIDDIALOG_H
