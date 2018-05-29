/********************************************************************************
** Form generated from reading UI file 'warning.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WARNING_H
#define UI_WARNING_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Warning
{
public:
    QTextBrowser *TextBox;
    QPushButton *Close;

    void setupUi(QWidget *Warning)
    {
        if (Warning->objectName().isEmpty())
            Warning->setObjectName(QStringLiteral("Warning"));
        Warning->resize(322, 201);
        TextBox = new QTextBrowser(Warning);
        TextBox->setObjectName(QStringLiteral("TextBox"));
        TextBox->setGeometry(QRect(10, 20, 301, 131));
        Close = new QPushButton(Warning);
        Close->setObjectName(QStringLiteral("Close"));
        Close->setGeometry(QRect(110, 160, 100, 35));

        retranslateUi(Warning);

        QMetaObject::connectSlotsByName(Warning);
    } // setupUi

    void retranslateUi(QWidget *Warning)
    {
        Warning->setWindowTitle(QApplication::translate("Warning", "Error: Can not find path", nullptr));
        Close->setText(QApplication::translate("Warning", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Warning: public Ui_Warning {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WARNING_H
