#ifndef ELLISPOIDDIALOG_H
#define ELLISPOIDDIALOG_H

#include <QDialog>

namespace Ui {
class EllispoidDialog;
}

class EllispoidDialog : public QDialog
{
    Q_OBJECT

public:
    explicit EllispoidDialog(QWidget *parent = nullptr);
    ~EllispoidDialog();
    int getRx();
    int getRy();
    int getRz();

private:
    Ui::EllispoidDialog *ui;
};

#endif // ELLISPOIDDIALOG_H
