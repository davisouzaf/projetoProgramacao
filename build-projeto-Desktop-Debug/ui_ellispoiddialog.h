/********************************************************************************
** Form generated from reading UI file 'ellispoiddialog.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ELLISPOIDDIALOG_H
#define UI_ELLISPOIDDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSlider>

QT_BEGIN_NAMESPACE

class Ui_EllispoidDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QSlider *XSlider;
    QLCDNumber *lcdNumber;
    QLabel *label_2;
    QSlider *YSlider;
    QLCDNumber *lcdNumber_2;
    QLabel *label_3;
    QSlider *ZSlider;
    QLCDNumber *lcdNumber_3;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *EllispoidDialog)
    {
        if (EllispoidDialog->objectName().isEmpty())
            EllispoidDialog->setObjectName(QString::fromUtf8("EllispoidDialog"));
        EllispoidDialog->resize(400, 300);
        gridLayout = new QGridLayout(EllispoidDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(EllispoidDialog);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        XSlider = new QSlider(EllispoidDialog);
        XSlider->setObjectName(QString::fromUtf8("XSlider"));
        XSlider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(XSlider, 0, 1, 1, 1);

        lcdNumber = new QLCDNumber(EllispoidDialog);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));

        gridLayout->addWidget(lcdNumber, 0, 2, 1, 1);

        label_2 = new QLabel(EllispoidDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        YSlider = new QSlider(EllispoidDialog);
        YSlider->setObjectName(QString::fromUtf8("YSlider"));
        YSlider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(YSlider, 1, 1, 1, 1);

        lcdNumber_2 = new QLCDNumber(EllispoidDialog);
        lcdNumber_2->setObjectName(QString::fromUtf8("lcdNumber_2"));

        gridLayout->addWidget(lcdNumber_2, 1, 2, 1, 1);

        label_3 = new QLabel(EllispoidDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        ZSlider = new QSlider(EllispoidDialog);
        ZSlider->setObjectName(QString::fromUtf8("ZSlider"));
        ZSlider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(ZSlider, 2, 1, 1, 1);

        lcdNumber_3 = new QLCDNumber(EllispoidDialog);
        lcdNumber_3->setObjectName(QString::fromUtf8("lcdNumber_3"));

        gridLayout->addWidget(lcdNumber_3, 2, 2, 1, 1);

        buttonBox = new QDialogButtonBox(EllispoidDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 3, 0, 1, 3);


        retranslateUi(EllispoidDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), EllispoidDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), EllispoidDialog, SLOT(reject()));
        QObject::connect(XSlider, SIGNAL(valueChanged(int)), lcdNumber, SLOT(display(int)));
        QObject::connect(YSlider, SIGNAL(valueChanged(int)), lcdNumber_2, SLOT(display(int)));
        QObject::connect(ZSlider, SIGNAL(valueChanged(int)), lcdNumber_3, SLOT(display(int)));

        QMetaObject::connectSlotsByName(EllispoidDialog);
    } // setupUi

    void retranslateUi(QDialog *EllispoidDialog)
    {
        EllispoidDialog->setWindowTitle(QCoreApplication::translate("EllispoidDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("EllispoidDialog", "X radius", nullptr));
        label_2->setText(QCoreApplication::translate("EllispoidDialog", "Y radius", nullptr));
        label_3->setText(QCoreApplication::translate("EllispoidDialog", "Z radius", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EllispoidDialog: public Ui_EllispoidDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ELLISPOIDDIALOG_H
