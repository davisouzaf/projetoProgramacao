#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "dimdialog.h"
#include "QColor"
#include "boxdialog.h"
#include "ellipsoiddialog.h"
#include "QColorDialog"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    void mudaCor();
public slots:
    void on_pushButtonDim_clicked();
    void on_pushButtonCutBox_clicked();

private slots:
    void on_ColorButton_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
