/********************************************************************************
** Form generated from reading UI file 'acrobat_choice.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACROBAT_CHOICE_H
#define UI_ACROBAT_CHOICE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Acrobat_choice
{
public:
    QPushButton *Acrobat11;
    QPushButton *AcrobatDC;
    QPushButton *Acrobat12;
    QPushButton *Cancel;
    QPushButton *Acobat_gen;
    QPushButton *Acrobat10;

    void setupUi(QWidget *Acrobat_choice)
    {
        if (Acrobat_choice->objectName().isEmpty())
            Acrobat_choice->setObjectName(QStringLiteral("Acrobat_choice"));
        Acrobat_choice->resize(146, 255);
        Acrobat11 = new QPushButton(Acrobat_choice);
        Acrobat11->setObjectName(QStringLiteral("Acrobat11"));
        Acrobat11->setGeometry(QRect(20, 50, 100, 35));
        AcrobatDC = new QPushButton(Acrobat_choice);
        AcrobatDC->setObjectName(QStringLiteral("AcrobatDC"));
        AcrobatDC->setGeometry(QRect(20, 130, 100, 35));
        Acrobat12 = new QPushButton(Acrobat_choice);
        Acrobat12->setObjectName(QStringLiteral("Acrobat12"));
        Acrobat12->setGeometry(QRect(20, 90, 100, 35));
        Cancel = new QPushButton(Acrobat_choice);
        Cancel->setObjectName(QStringLiteral("Cancel"));
        Cancel->setGeometry(QRect(20, 210, 100, 35));
        Acobat_gen = new QPushButton(Acrobat_choice);
        Acobat_gen->setObjectName(QStringLiteral("Acobat_gen"));
        Acobat_gen->setGeometry(QRect(20, 170, 100, 35));
        Acrobat10 = new QPushButton(Acrobat_choice);
        Acrobat10->setObjectName(QStringLiteral("Acrobat10"));
        Acrobat10->setGeometry(QRect(20, 10, 100, 35));

        retranslateUi(Acrobat_choice);

        QMetaObject::connectSlotsByName(Acrobat_choice);
    } // setupUi

    void retranslateUi(QWidget *Acrobat_choice)
    {
        Acrobat_choice->setWindowTitle(QApplication::translate("Acrobat_choice", "Choose", nullptr));
        Acrobat11->setText(QApplication::translate("Acrobat_choice", "Acrobat 11", nullptr));
        AcrobatDC->setText(QApplication::translate("Acrobat_choice", "Acrobat DC 2017", nullptr));
        Acrobat12->setText(QApplication::translate("Acrobat_choice", "Acrobat 12", nullptr));
        Cancel->setText(QApplication::translate("Acrobat_choice", "Cancel", nullptr));
        Acobat_gen->setText(QApplication::translate("Acrobat_choice", "Acrobat Batch", nullptr));
        Acrobat10->setText(QApplication::translate("Acrobat_choice", "Acrobat 10", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Acrobat_choice: public Ui_Acrobat_choice {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACROBAT_CHOICE_H
