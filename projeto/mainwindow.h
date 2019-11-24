#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "QDebug"
#include "QMessageBox"
#include <QMainWindow>
#include "dimdialog.h"
#include "QColor"
#include "boxdialog.h"
#include "spheredialog.h"
#include "QColorDialog"
#include "QFileDialog"
#include "cstring"
#include "QString"
#include "ellipsoiddialog.h"
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

    void on_pushButton_2_clicked();

    void on_actionAbout_triggered();

    void on_pushButton_clicked();

    void on_horizontalSliderZ_valueChanged(int value);

   // void on_horizontalSliderZ_sliderMoved(int position);

    void on_actionSave_File_triggered();

    void on_actionView_solid_triggered();

    void on_pushButtonPutSphere_clicked();

    void on_pushButtonCurSphere_clicked();

    void on_pushButtonPutBox_clicked();

    void on_pushButtonPutEllip_clicked();

    void on_pushButtonCutEllip_clicked();

    void on_actionExit_triggered();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
