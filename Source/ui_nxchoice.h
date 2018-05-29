/********************************************************************************
** Form generated from reading UI file 'nxchoice.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NXCHOICE_H
#define UI_NXCHOICE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NXChoice
{
public:
    QPushButton *NX10;
    QPushButton *NX11;
    QPushButton *NX_gen;
    QPushButton *NX_Cancel;

    void setupUi(QWidget *NXChoice)
    {
        if (NXChoice->objectName().isEmpty())
            NXChoice->setObjectName(QStringLiteral("NXChoice"));
        NXChoice->resize(146, 179);
        NX10 = new QPushButton(NXChoice);
        NX10->setObjectName(QStringLiteral("NX10"));
        NX10->setGeometry(QRect(20, 10, 100, 35));
        NX11 = new QPushButton(NXChoice);
        NX11->setObjectName(QStringLiteral("NX11"));
        NX11->setGeometry(QRect(20, 50, 100, 35));
        NX_gen = new QPushButton(NXChoice);
        NX_gen->setObjectName(QStringLiteral("NX_gen"));
        NX_gen->setGeometry(QRect(20, 90, 100, 35));
        NX_Cancel = new QPushButton(NXChoice);
        NX_Cancel->setObjectName(QStringLiteral("NX_Cancel"));
        NX_Cancel->setGeometry(QRect(20, 130, 100, 35));

        retranslateUi(NXChoice);

        QMetaObject::connectSlotsByName(NXChoice);
    } // setupUi

    void retranslateUi(QWidget *NXChoice)
    {
        NXChoice->setWindowTitle(QApplication::translate("NXChoice", "Choose", nullptr));
        NX10->setText(QApplication::translate("NXChoice", "NX 10", nullptr));
        NX11->setText(QApplication::translate("NXChoice", "NX 11", nullptr));
        NX_gen->setText(QApplication::translate("NXChoice", "NX Batch", nullptr));
        NX_Cancel->setText(QApplication::translate("NXChoice", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NXChoice: public Ui_NXChoice {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NXCHOICE_H
