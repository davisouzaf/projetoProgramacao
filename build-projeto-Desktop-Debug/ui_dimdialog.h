/********************************************************************************
** Form generated from reading UI file 'dimdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIMDIALOG_H
#define UI_DIMDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSlider>

QT_BEGIN_NAMESPACE

class Ui_dimDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QSlider *horizontalSliderX;
    QLCDNumber *lcdNumberX;
    QLabel *label_2;
    QSlider *horizontalSliderY;
    QLCDNumber *lcdNumberY;
    QLabel *label_3;
    QSlider *horizontalSliderZ;
    QLCDNumber *lcdNumberZ;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *dimDialog)
    {
        if (dimDialog->objectName().isEmpty())
            dimDialog->setObjectName(QString::fromUtf8("dimDialog"));
        dimDialog->resize(402, 296);
        gridLayout = new QGridLayout(dimDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(dimDialog);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        horizontalSliderX = new QSlider(dimDialog);
        horizontalSliderX->setObjectName(QString::fromUtf8("horizontalSliderX"));
        horizontalSliderX->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSliderX, 0, 1, 1, 1);

        lcdNumberX = new QLCDNumber(dimDialog);
        lcdNumberX->setObjectName(QString::fromUtf8("lcdNumberX"));

        gridLayout->addWidget(lcdNumberX, 0, 2, 1, 1);

        label_2 = new QLabel(dimDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        horizontalSliderY = new QSlider(dimDialog);
        horizontalSliderY->setObjectName(QString::fromUtf8("horizontalSliderY"));
        horizontalSliderY->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSliderY, 1, 1, 1, 1);

        lcdNumberY = new QLCDNumber(dimDialog);
        lcdNumberY->setObjectName(QString::fromUtf8("lcdNumberY"));

        gridLayout->addWidget(lcdNumberY, 1, 2, 1, 1);

        label_3 = new QLabel(dimDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        horizontalSliderZ = new QSlider(dimDialog);
        horizontalSliderZ->setObjectName(QString::fromUtf8("horizontalSliderZ"));
        horizontalSliderZ->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSliderZ, 2, 1, 1, 1);

        lcdNumberZ = new QLCDNumber(dimDialog);
        lcdNumberZ->setObjectName(QString::fromUtf8("lcdNumberZ"));

        gridLayout->addWidget(lcdNumberZ, 2, 2, 1, 1);

        buttonBox = new QDialogButtonBox(dimDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 3, 1, 1, 2);


        retranslateUi(dimDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), dimDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), dimDialog, SLOT(reject()));
        QObject::connect(horizontalSliderZ, SIGNAL(valueChanged(int)), lcdNumberZ, SLOT(display(int)));
        QObject::connect(horizontalSliderY, SIGNAL(valueChanged(int)), lcdNumberY, SLOT(display(int)));
        QObject::connect(horizontalSliderX, SIGNAL(valueChanged(int)), lcdNumberX, SLOT(display(int)));

        QMetaObject::connectSlotsByName(dimDialog);
    } // setupUi

    void retranslateUi(QDialog *dimDialog)
    {
        dimDialog->setWindowTitle(QCoreApplication::translate("dimDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("dimDialog", "Columns:", nullptr));
        label_2->setText(QCoreApplication::translate("dimDialog", "Lines:", nullptr));
        label_3->setText(QCoreApplication::translate("dimDialog", "Plans:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class dimDialog: public Ui_dimDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIMDIALOG_H
