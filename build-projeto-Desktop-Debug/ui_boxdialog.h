/********************************************************************************
** Form generated from reading UI file 'boxdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOXDIALOG_H
#define UI_BOXDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSlider>

QT_BEGIN_NAMESPACE

class Ui_boxDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QSlider *SliderX;
    QLCDNumber *lcdNumber;
    QLabel *label_2;
    QSlider *SliderY;
    QLCDNumber *lcdNumber_2;
    QLabel *label_3;
    QSlider *SliderZ;
    QLCDNumber *lcdNumber_3;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *boxDialog)
    {
        if (boxDialog->objectName().isEmpty())
            boxDialog->setObjectName(QString::fromUtf8("boxDialog"));
        boxDialog->resize(423, 311);
        gridLayout = new QGridLayout(boxDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(boxDialog);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        SliderX = new QSlider(boxDialog);
        SliderX->setObjectName(QString::fromUtf8("SliderX"));
        SliderX->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(SliderX, 0, 1, 1, 1);

        lcdNumber = new QLCDNumber(boxDialog);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));

        gridLayout->addWidget(lcdNumber, 0, 2, 1, 1);

        label_2 = new QLabel(boxDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        SliderY = new QSlider(boxDialog);
        SliderY->setObjectName(QString::fromUtf8("SliderY"));
        SliderY->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(SliderY, 1, 1, 1, 1);

        lcdNumber_2 = new QLCDNumber(boxDialog);
        lcdNumber_2->setObjectName(QString::fromUtf8("lcdNumber_2"));

        gridLayout->addWidget(lcdNumber_2, 1, 2, 1, 1);

        label_3 = new QLabel(boxDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        SliderZ = new QSlider(boxDialog);
        SliderZ->setObjectName(QString::fromUtf8("SliderZ"));
        SliderZ->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(SliderZ, 2, 1, 1, 1);

        lcdNumber_3 = new QLCDNumber(boxDialog);
        lcdNumber_3->setObjectName(QString::fromUtf8("lcdNumber_3"));

        gridLayout->addWidget(lcdNumber_3, 2, 2, 1, 1);

        buttonBox = new QDialogButtonBox(boxDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 3, 0, 1, 3);


        retranslateUi(boxDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), boxDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), boxDialog, SLOT(reject()));
        QObject::connect(SliderX, SIGNAL(valueChanged(int)), lcdNumber, SLOT(display(int)));
        QObject::connect(SliderY, SIGNAL(valueChanged(int)), lcdNumber_2, SLOT(display(int)));
        QObject::connect(SliderZ, SIGNAL(valueChanged(int)), lcdNumber_3, SLOT(display(int)));

        QMetaObject::connectSlotsByName(boxDialog);
    } // setupUi

    void retranslateUi(QDialog *boxDialog)
    {
        boxDialog->setWindowTitle(QCoreApplication::translate("boxDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("boxDialog", "X", nullptr));
        label_2->setText(QCoreApplication::translate("boxDialog", "Y", nullptr));
        label_3->setText(QCoreApplication::translate("boxDialog", "Z", nullptr));
    } // retranslateUi

};

namespace Ui {
    class boxDialog: public Ui_boxDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOXDIALOG_H
