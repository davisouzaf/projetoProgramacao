/********************************************************************************
** Form generated from reading UI file 'spheredialog.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SPHEREDIALOG_H
#define UI_SPHEREDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSlider>

QT_BEGIN_NAMESPACE

class Ui_SphereDialog
{
public:
    QDialogButtonBox *buttonBox;
    QLCDNumber *lcdNumber;
    QLabel *label;
    QSlider *horizontalSlider;

    void setupUi(QDialog *SphereDialog)
    {
        if (SphereDialog->objectName().isEmpty())
            SphereDialog->setObjectName(QString::fromUtf8("SphereDialog"));
        SphereDialog->resize(400, 138);
        buttonBox = new QDialogButtonBox(SphereDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(40, 100, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        lcdNumber = new QLCDNumber(SphereDialog);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));
        lcdNumber->setGeometry(QRect(310, 50, 64, 23));
        label = new QLabel(SphereDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 50, 67, 17));
        horizontalSlider = new QSlider(SphereDialog);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(110, 50, 160, 16));
        horizontalSlider->setOrientation(Qt::Horizontal);

        retranslateUi(SphereDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), SphereDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), SphereDialog, SLOT(reject()));
        QObject::connect(horizontalSlider, SIGNAL(valueChanged(int)), lcdNumber, SLOT(display(int)));

        QMetaObject::connectSlotsByName(SphereDialog);
    } // setupUi

    void retranslateUi(QDialog *SphereDialog)
    {
        SphereDialog->setWindowTitle(QCoreApplication::translate("SphereDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("SphereDialog", "Radius", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SphereDialog: public Ui_SphereDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SPHEREDIALOG_H
