/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "plotter.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionSave_File;
    QAction *actionView_solid;
    QAction *actionExit;
    QAction *actionAbout;
    QWidget *centralWidget;
    Plotter *widget;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QSlider *horizontalSliderZ;
    QLCDNumber *lcdNumberZ;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout_2;
    QPushButton *pushButtonPutSphere;
    QPushButton *pushButtonDim;
    QPushButton *pushButton;
    QPushButton *pushButtonCurSphere;
    QPushButton *pushButtonPutEllip;
    QPushButton *pushButtonCutBox;
    QPushButton *pushButtonCutEllip;
    QPushButton *pushButtonPutBox;
    QPushButton *pushButton_2;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_5;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_3;
    QSlider *verticalSlider;
    QLabel *label_2;
    QVBoxLayout *verticalLayout_2;
    QSlider *verticalSlider_2;
    QLabel *label_3;
    QVBoxLayout *verticalLayout;
    QSlider *verticalSlider_3;
    QLabel *label_4;
    QPushButton *ColorButton;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_6;
    QLCDNumber *lcdNumber;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_7;
    QLCDNumber *lcdNumber_2;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuHelp;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(545, 561);
        actionSave_File = new QAction(MainWindow);
        actionSave_File->setObjectName(QString::fromUtf8("actionSave_File"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/iconfinder_floppy_285657.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave_File->setIcon(icon);
        actionView_solid = new QAction(MainWindow);
        actionView_solid->setObjectName(QString::fromUtf8("actionView_solid"));
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/iconfinder_common-logout-signout-exit-glyph_763291.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionExit->setIcon(icon1);
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/iconfinder_Information_27854.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAbout->setIcon(icon2);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        widget = new Plotter(centralWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 80, 341, 341));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 450, 521, 46));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        horizontalSliderZ = new QSlider(layoutWidget);
        horizontalSliderZ->setObjectName(QString::fromUtf8("horizontalSliderZ"));
        horizontalSliderZ->setMinimum(1);
        horizontalSliderZ->setMaximum(10);
        horizontalSliderZ->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSliderZ, 0, 1, 1, 1);

        lcdNumberZ = new QLCDNumber(layoutWidget);
        lcdNumberZ->setObjectName(QString::fromUtf8("lcdNumberZ"));

        gridLayout->addWidget(lcdNumberZ, 0, 2, 1, 1);

        layoutWidget1 = new QWidget(centralWidget);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 0, 511, 64));
        gridLayout_2 = new QGridLayout(layoutWidget1);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButtonPutSphere = new QPushButton(layoutWidget1);
        pushButtonPutSphere->setObjectName(QString::fromUtf8("pushButtonPutSphere"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/iconfinder_circle_293633.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonPutSphere->setIcon(icon3);
        pushButtonPutSphere->setIconSize(QSize(25, 25));

        gridLayout_2->addWidget(pushButtonPutSphere, 0, 5, 1, 1);

        pushButtonDim = new QPushButton(layoutWidget1);
        pushButtonDim->setObjectName(QString::fromUtf8("pushButtonDim"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/iconfinder_essential_set_grid_1110970.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonDim->setIcon(icon4);
        pushButtonDim->setIconSize(QSize(25, 25));

        gridLayout_2->addWidget(pushButtonDim, 0, 0, 1, 1);

        pushButton = new QPushButton(layoutWidget1);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/iconfinder_misc-_cube_1276871(1).svg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon5);
        pushButton->setIconSize(QSize(25, 25));

        gridLayout_2->addWidget(pushButton, 0, 2, 1, 1);

        pushButtonCurSphere = new QPushButton(layoutWidget1);
        pushButtonCurSphere->setObjectName(QString::fromUtf8("pushButtonCurSphere"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/iconfinder_check-circle-outline-blank_326565.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonCurSphere->setIcon(icon6);
        pushButtonCurSphere->setIconSize(QSize(25, 25));

        gridLayout_2->addWidget(pushButtonCurSphere, 0, 6, 1, 1);

        pushButtonPutEllip = new QPushButton(layoutWidget1);
        pushButtonPutEllip->setObjectName(QString::fromUtf8("pushButtonPutEllip"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/iconfinder_ellipse_82638.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonPutEllip->setIcon(icon7);
        pushButtonPutEllip->setIconSize(QSize(25, 25));

        gridLayout_2->addWidget(pushButtonPutEllip, 0, 7, 1, 1);

        pushButtonCutBox = new QPushButton(layoutWidget1);
        pushButtonCutBox->setObjectName(QString::fromUtf8("pushButtonCutBox"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/iconfinder_Rubics_Cube_toy_magic_cube_geek_3186861.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonCutBox->setIcon(icon8);
        pushButtonCutBox->setIconSize(QSize(25, 25));

        gridLayout_2->addWidget(pushButtonCutBox, 0, 4, 1, 1);

        pushButtonCutEllip = new QPushButton(layoutWidget1);
        pushButtonCutEllip->setObjectName(QString::fromUtf8("pushButtonCutEllip"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/iconfinder_Ellipse_131857.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonCutEllip->setIcon(icon9);
        pushButtonCutEllip->setIconSize(QSize(25, 25));

        gridLayout_2->addWidget(pushButtonCutEllip, 0, 8, 1, 1);

        pushButtonPutBox = new QPushButton(layoutWidget1);
        pushButtonPutBox->setObjectName(QString::fromUtf8("pushButtonPutBox"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/iconfinder_Rubics_Cube_toy_magic_cube_geek_3151562.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonPutBox->setIcon(icon10);
        pushButtonPutBox->setIconSize(QSize(25, 25));

        gridLayout_2->addWidget(pushButtonPutBox, 0, 3, 1, 1);

        pushButton_2 = new QPushButton(layoutWidget1);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/iconfinder_cube-block-box-shipping_2205214.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon11);
        pushButton_2->setIconSize(QSize(25, 25));

        gridLayout_2->addWidget(pushButton_2, 0, 1, 1, 1);

        layoutWidget2 = new QWidget(centralWidget);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(410, 60, 107, 381));
        verticalLayout_5 = new QVBoxLayout(layoutWidget2);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        QFont font;
        font.setPointSize(13);
        label_5->setFont(font);

        verticalLayout_5->addWidget(label_5);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalSlider = new QSlider(layoutWidget2);
        verticalSlider->setObjectName(QString::fromUtf8("verticalSlider"));
        verticalSlider->setEnabled(false);
        verticalSlider->setMaximum(255);
        verticalSlider->setOrientation(Qt::Vertical);

        verticalLayout_3->addWidget(verticalSlider);

        label_2 = new QLabel(layoutWidget2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_3->addWidget(label_2);


        horizontalLayout->addLayout(verticalLayout_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalSlider_2 = new QSlider(layoutWidget2);
        verticalSlider_2->setObjectName(QString::fromUtf8("verticalSlider_2"));
        verticalSlider_2->setEnabled(false);
        verticalSlider_2->setMaximum(255);
        verticalSlider_2->setOrientation(Qt::Vertical);

        verticalLayout_2->addWidget(verticalSlider_2);

        label_3 = new QLabel(layoutWidget2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout_2->addWidget(label_3);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalSlider_3 = new QSlider(layoutWidget2);
        verticalSlider_3->setObjectName(QString::fromUtf8("verticalSlider_3"));
        verticalSlider_3->setEnabled(false);
        verticalSlider_3->setMaximum(255);
        verticalSlider_3->setOrientation(Qt::Vertical);

        verticalLayout->addWidget(verticalSlider_3);

        label_4 = new QLabel(layoutWidget2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout->addWidget(label_4);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_4->addLayout(horizontalLayout);

        ColorButton = new QPushButton(layoutWidget2);
        ColorButton->setObjectName(QString::fromUtf8("ColorButton"));

        verticalLayout_4->addWidget(ColorButton);


        verticalLayout_5->addLayout(verticalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_6 = new QLabel(layoutWidget2);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_3->addWidget(label_6);

        lcdNumber = new QLCDNumber(layoutWidget2);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));
        lcdNumber->setEnabled(true);

        horizontalLayout_3->addWidget(lcdNumber);


        verticalLayout_5->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_7 = new QLabel(layoutWidget2);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_2->addWidget(label_7);

        lcdNumber_2 = new QLCDNumber(layoutWidget2);
        lcdNumber_2->setObjectName(QString::fromUtf8("lcdNumber_2"));

        horizontalLayout_2->addWidget(lcdNumber_2);


        verticalLayout_5->addLayout(horizontalLayout_2);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 545, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionSave_File);
        menuFile->addAction(actionView_solid);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);
        menuHelp->addAction(actionAbout);

        retranslateUi(MainWindow);
        QObject::connect(horizontalSliderZ, SIGNAL(valueChanged(int)), lcdNumberZ, SLOT(display(int)));
        QObject::connect(horizontalSliderZ, SIGNAL(valueChanged(int)), widget, SLOT(setplan()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionSave_File->setText(QCoreApplication::translate("MainWindow", "Save File", nullptr));
        actionView_solid->setText(QCoreApplication::translate("MainWindow", "View solid", nullptr));
        actionExit->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        actionAbout->setText(QCoreApplication::translate("MainWindow", "About", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Plano Z:", nullptr));
        pushButtonPutSphere->setText(QString());
        pushButtonDim->setText(QString());
        pushButton->setText(QString());
        pushButtonCurSphere->setText(QString());
        pushButtonPutEllip->setText(QString());
        pushButtonCutBox->setText(QString());
        pushButtonCutEllip->setText(QString());
        pushButtonPutBox->setText(QString());
        pushButton_2->setText(QString());
        label_5->setText(QCoreApplication::translate("MainWindow", "Current Color", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "R", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "G", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "B", nullptr));
        ColorButton->setText(QCoreApplication::translate("MainWindow", "Select Color", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Y", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        menuHelp->setTitle(QCoreApplication::translate("MainWindow", "Help", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
