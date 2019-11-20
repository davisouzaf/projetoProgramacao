#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "QDebug"
#include "QMessageBox"
#include <QMainWindow>
#include "dimdialog.h"
#include "QColor"
#include "boxdialog.h"
#include "EllispoidDialog.h"
#include "QColorDialog"
#include "spheredialog.h"

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
    void on_ColorButton_clicked();

    void on_pushButton_2_clicked();

    void on_actionAbout_triggered();

    void on_pushButton_clicked();

    void on_horizontalSliderZ_valueChanged(int value);

    void finaliza();

   // void on_horizontalSliderZ_sliderMoved(int position);

    void on_pushButtonPutSphere_clicked();

    void on_pushButtonPutEllip_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
