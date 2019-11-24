/********************************************************************************
** Form generated from reading UI file 'ellipsoiddialog.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ELLIPSOIDDIALOG_H
#define UI_ELLIPSOIDDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSlider>

QT_BEGIN_NAMESPACE

class Ui_EllipsoidDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QSlider *horizontalSlider;
    QLCDNumber *lcdNumber;
    QLabel *label_2;
    QSlider *horizontalSlider_2;
    QLCDNumber *lcdNumber_2;
    QLabel *label_3;
    QSlider *horizontalSlider_3;
    QLCDNumber *lcdNumber_3;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *EllipsoidDialog)
    {
        if (EllipsoidDialog->objectName().isEmpty())
            EllipsoidDialog->setObjectName(QString::fromUtf8("EllipsoidDialog"));
        EllipsoidDialog->resize(400, 300);
        gridLayout = new QGridLayout(EllipsoidDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(EllipsoidDialog);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        horizontalSlider = new QSlider(EllipsoidDialog);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSlider, 0, 1, 1, 1);

        lcdNumber = new QLCDNumber(EllipsoidDialog);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));

        gridLayout->addWidget(lcdNumber, 0, 2, 1, 1);

        label_2 = new QLabel(EllipsoidDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        horizontalSlider_2 = new QSlider(EllipsoidDialog);
        horizontalSlider_2->setObjectName(QString::fromUtf8("horizontalSlider_2"));
        horizontalSlider_2->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSlider_2, 1, 1, 1, 1);

        lcdNumber_2 = new QLCDNumber(EllipsoidDialog);
        lcdNumber_2->setObjectName(QString::fromUtf8("lcdNumber_2"));

        gridLayout->addWidget(lcdNumber_2, 1, 2, 1, 1);

        label_3 = new QLabel(EllipsoidDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        horizontalSlider_3 = new QSlider(EllipsoidDialog);
        horizontalSlider_3->setObjectName(QString::fromUtf8("horizontalSlider_3"));
        horizontalSlider_3->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSlider_3, 2, 1, 1, 1);

        lcdNumber_3 = new QLCDNumber(EllipsoidDialog);
        lcdNumber_3->setObjectName(QString::fromUtf8("lcdNumber_3"));

        gridLayout->addWidget(lcdNumber_3, 2, 2, 1, 1);

        buttonBox = new QDialogButtonBox(EllipsoidDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 3, 0, 1, 3);


        retranslateUi(EllipsoidDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), EllipsoidDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), EllipsoidDialog, SLOT(reject()));
        QObject::connect(horizontalSlider, SIGNAL(valueChanged(int)), lcdNumber, SLOT(display(int)));
        QObject::connect(horizontalSlider_2, SIGNAL(valueChanged(int)), lcdNumber_2, SLOT(display(int)));
        QObject::connect(horizontalSlider_3, SIGNAL(valueChanged(int)), lcdNumber_3, SLOT(display(int)));

        QMetaObject::connectSlotsByName(EllipsoidDialog);
    } // setupUi

    void retranslateUi(QDialog *EllipsoidDialog)
    {
        EllipsoidDialog->setWindowTitle(QCoreApplication::translate("EllipsoidDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("EllipsoidDialog", "X-Radius", nullptr));
        label_2->setText(QCoreApplication::translate("EllipsoidDialog", "Y-Radius", nullptr));
        label_3->setText(QCoreApplication::translate("EllipsoidDialog", "Z-Radius", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EllipsoidDialog: public Ui_EllipsoidDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ELLIPSOIDDIALOG_H
