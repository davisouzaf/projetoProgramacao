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
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout_2;
    QPushButton *pushButtonCutEllip;
    QPushButton *pushButtonPutSphere;
    QPushButton *pushButtonPutBox;
    QPushButton *pushButtonCutSphere;
    QPushButton *pushButtonCutBox;
    QPushButton *pushButtonDim;
    QPushButton *pushButtonPutEllip;
    QLabel *label_5;
    Plotter *widget;
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
    QLabel *label_6;
    QLCDNumber *lcdNumber;
    QLabel *label_7;
    QLCDNumber *lcdNumber_2;
    QPushButton *ColorButton;
    QGridLayout *gridLayout;
    QLCDNumber *lcdNumberZ;
    QLabel *label;
    QSlider *horizontalSliderZ;
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
        MainWindow->resize(704, 467);
        actionSave_File = new QAction(MainWindow);
        actionSave_File->setObjectName(QString::fromUtf8("actionSave_File"));
        actionView_solid = new QAction(MainWindow);
        actionView_solid->setObjectName(QString::fromUtf8("actionView_solid"));
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout_3 = new QGridLayout(centralWidget);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        pushButtonCutEllip = new QPushButton(centralWidget);
        pushButtonCutEllip->setObjectName(QString::fromUtf8("pushButtonCutEllip"));

        gridLayout_2->addWidget(pushButtonCutEllip, 0, 7, 1, 1);

        pushButtonPutSphere = new QPushButton(centralWidget);
        pushButtonPutSphere->setObjectName(QString::fromUtf8("pushButtonPutSphere"));

        gridLayout_2->addWidget(pushButtonPutSphere, 0, 4, 1, 1);

        pushButtonPutBox = new QPushButton(centralWidget);
        pushButtonPutBox->setObjectName(QString::fromUtf8("pushButtonPutBox"));

        gridLayout_2->addWidget(pushButtonPutBox, 0, 2, 1, 1);

        pushButtonCutSphere = new QPushButton(centralWidget);
        pushButtonCutSphere->setObjectName(QString::fromUtf8("pushButtonCutSphere"));

        gridLayout_2->addWidget(pushButtonCutSphere, 0, 5, 1, 1);

        pushButtonCutBox = new QPushButton(centralWidget);
        pushButtonCutBox->setObjectName(QString::fromUtf8("pushButtonCutBox"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/iconfinder_Rubics_Cube_toy_magic_cube_geek_3186861.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonCutBox->setIcon(icon);
        pushButtonCutBox->setIconSize(QSize(25, 25));

        gridLayout_2->addWidget(pushButtonCutBox, 0, 3, 1, 1);

        pushButtonDim = new QPushButton(centralWidget);
        pushButtonDim->setObjectName(QString::fromUtf8("pushButtonDim"));

        gridLayout_2->addWidget(pushButtonDim, 0, 0, 1, 1);

        pushButtonPutEllip = new QPushButton(centralWidget);
        pushButtonPutEllip->setObjectName(QString::fromUtf8("pushButtonPutEllip"));

        gridLayout_2->addWidget(pushButtonPutEllip, 0, 6, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 0, 0, 1, 1);

        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        QFont font;
        font.setPointSize(13);
        label_5->setFont(font);

        gridLayout_3->addWidget(label_5, 1, 1, 1, 1);

        widget = new Plotter(centralWidget);
        widget->setObjectName(QString::fromUtf8("widget"));

        gridLayout_3->addWidget(widget, 2, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalSlider = new QSlider(centralWidget);
        verticalSlider->setObjectName(QString::fromUtf8("verticalSlider"));
        verticalSlider->setEnabled(false);
        verticalSlider->setMaximum(255);
        verticalSlider->setOrientation(Qt::Vertical);

        verticalLayout_3->addWidget(verticalSlider);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_3->addWidget(label_2);


        horizontalLayout->addLayout(verticalLayout_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalSlider_2 = new QSlider(centralWidget);
        verticalSlider_2->setObjectName(QString::fromUtf8("verticalSlider_2"));
        verticalSlider_2->setEnabled(false);
        verticalSlider_2->setMaximum(255);
        verticalSlider_2->setOrientation(Qt::Vertical);

        verticalLayout_2->addWidget(verticalSlider_2);

        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout_2->addWidget(label_3);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalSlider_3 = new QSlider(centralWidget);
        verticalSlider_3->setObjectName(QString::fromUtf8("verticalSlider_3"));
        verticalSlider_3->setEnabled(false);
        verticalSlider_3->setMaximum(255);
        verticalSlider_3->setOrientation(Qt::Vertical);

        verticalLayout->addWidget(verticalSlider_3);

        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout->addWidget(label_4);


        horizontalLayout->addLayout(verticalLayout);


        gridLayout_3->addLayout(horizontalLayout, 3, 1, 1, 1);

        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_3->addWidget(label_6, 4, 1, 1, 1);

        lcdNumber = new QLCDNumber(centralWidget);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));
        lcdNumber->setEnabled(true);

        gridLayout_3->addWidget(lcdNumber, 5, 1, 1, 1);

        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_3->addWidget(label_7, 6, 1, 1, 1);

        lcdNumber_2 = new QLCDNumber(centralWidget);
        lcdNumber_2->setObjectName(QString::fromUtf8("lcdNumber_2"));

        gridLayout_3->addWidget(lcdNumber_2, 7, 1, 1, 1);

        ColorButton = new QPushButton(centralWidget);
        ColorButton->setObjectName(QString::fromUtf8("ColorButton"));

        gridLayout_3->addWidget(ColorButton, 8, 1, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        lcdNumberZ = new QLCDNumber(centralWidget);
        lcdNumberZ->setObjectName(QString::fromUtf8("lcdNumberZ"));

        gridLayout->addWidget(lcdNumberZ, 0, 2, 1, 1);

        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        horizontalSliderZ = new QSlider(centralWidget);
        horizontalSliderZ->setObjectName(QString::fromUtf8("horizontalSliderZ"));
        horizontalSliderZ->setMaximum(10);
        horizontalSliderZ->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSliderZ, 0, 1, 1, 1);


        gridLayout_3->addLayout(gridLayout, 9, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 704, 21));
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

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionSave_File->setText(QCoreApplication::translate("MainWindow", "Save File", nullptr));
        actionView_solid->setText(QCoreApplication::translate("MainWindow", "View solid", nullptr));
        actionExit->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        actionAbout->setText(QCoreApplication::translate("MainWindow", "About", nullptr));
        pushButtonCutEllip->setText(QCoreApplication::translate("MainWindow", "CutEllipsoid", nullptr));
        pushButtonPutSphere->setText(QCoreApplication::translate("MainWindow", "PutSphere", nullptr));
        pushButtonPutBox->setText(QCoreApplication::translate("MainWindow", "PutBox", nullptr));
        pushButtonCutSphere->setText(QCoreApplication::translate("MainWindow", "CutSphere", nullptr));
        pushButtonCutBox->setText(QString());
        pushButtonDim->setText(QCoreApplication::translate("MainWindow", "SetDim", nullptr));
        pushButtonPutEllip->setText(QCoreApplication::translate("MainWindow", "PutEllipsoid", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Current Color", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "R", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "G", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "B", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Y", nullptr));
        ColorButton->setText(QCoreApplication::translate("MainWindow", "Select Color", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Plano Z:", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        menuHelp->setTitle(QCoreApplication::translate("MainWindow", "Help", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
