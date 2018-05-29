/********************************************************************************
** Form generated from reading UI file 'logon_screen.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGON_SCREEN_H
#define UI_LOGON_SCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_Logon_screen
{
public:
    QTextBrowser *textBrowser;
    QLineEdit *Password_entry;
    QPushButton *Continue;
    QPushButton *Cancel;

    void setupUi(QDialog *Logon_screen)
    {
        if (Logon_screen->objectName().isEmpty())
            Logon_screen->setObjectName(QStringLiteral("Logon_screen"));
        Logon_screen->resize(400, 194);
        Logon_screen->setAutoFillBackground(false);
        textBrowser = new QTextBrowser(Logon_screen);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(60, 20, 271, 51));
        textBrowser->setStyleSheet(QStringLiteral(""));
        Password_entry = new QLineEdit(Logon_screen);
        Password_entry->setObjectName(QStringLiteral("Password_entry"));
        Password_entry->setGeometry(QRect(130, 80, 121, 20));
        Continue = new QPushButton(Logon_screen);
        Continue->setObjectName(QStringLiteral("Continue"));
        Continue->setGeometry(QRect(70, 110, 100, 35));
        Cancel = new QPushButton(Logon_screen);
        Cancel->setObjectName(QStringLiteral("Cancel"));
        Cancel->setGeometry(QRect(200, 110, 100, 35));

        retranslateUi(Logon_screen);

        QMetaObject::connectSlotsByName(Logon_screen);
    } // setupUi

    void retranslateUi(QDialog *Logon_screen)
    {
        Logon_screen->setWindowTitle(QApplication::translate("Logon_screen", "Enter Password", nullptr));
        textBrowser->setHtml(QApplication::translate("Logon_screen", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Welcome to the Engineering IT Software Install Tool.</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Please enter the password below:</p></body></html>", nullptr));
        Password_entry->setText(QString());
        Continue->setText(QApplication::translate("Logon_screen", "Continue", nullptr));
        Cancel->setText(QApplication::translate("Logon_screen", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Logon_screen: public Ui_Logon_screen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGON_SCREEN_H
