#ifndef SPHEREDIALOG_H
#define SPHEREDIALOG_H

#include <QDialog>

namespace Ui {
class SphereDialog;
}

class SphereDialog : public QDialog
{
    Q_OBJECT

public:
    explicit SphereDialog(QWidget *parent = nullptr);
    ~SphereDialog();
    int getR();

private:
    Ui::SphereDialog *ui;
};

#endif // SPHEREDIALOG_H
