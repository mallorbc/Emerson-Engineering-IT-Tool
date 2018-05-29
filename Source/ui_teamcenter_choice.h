/********************************************************************************
** Form generated from reading UI file 'teamcenter_choice.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEAMCENTER_CHOICE_H
#define UI_TEAMCENTER_CHOICE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TeamCenter_Choice
{
public:
    QPushButton *Atit;
    QPushButton *Ava;
    QPushButton *Guadalajara;
    QPushButton *Karad;
    QPushButton *Lebanon;
    QPushButton *Mikulov;
    QPushButton *Natchitoches;
    QPushButton *Pune;
    QPushButton *Rayong;
    QPushButton *Reynosa;
    QPushButton *Sidney;
    QPushButton *Suzhou;
    QPushButton *Welkenraedt;
    QPushButton *Xian;
    QPushButton *Cancel;

    void setupUi(QWidget *TeamCenter_Choice)
    {
        if (TeamCenter_Choice->objectName().isEmpty())
            TeamCenter_Choice->setObjectName(QStringLiteral("TeamCenter_Choice"));
        TeamCenter_Choice->resize(254, 354);
        Atit = new QPushButton(TeamCenter_Choice);
        Atit->setObjectName(QStringLiteral("Atit"));
        Atit->setGeometry(QRect(20, 20, 100, 35));
        Ava = new QPushButton(TeamCenter_Choice);
        Ava->setObjectName(QStringLiteral("Ava"));
        Ava->setGeometry(QRect(20, 60, 100, 35));
        Guadalajara = new QPushButton(TeamCenter_Choice);
        Guadalajara->setObjectName(QStringLiteral("Guadalajara"));
        Guadalajara->setGeometry(QRect(20, 100, 100, 35));
        Karad = new QPushButton(TeamCenter_Choice);
        Karad->setObjectName(QStringLiteral("Karad"));
        Karad->setGeometry(QRect(20, 140, 100, 35));
        Lebanon = new QPushButton(TeamCenter_Choice);
        Lebanon->setObjectName(QStringLiteral("Lebanon"));
        Lebanon->setGeometry(QRect(20, 180, 100, 35));
        Mikulov = new QPushButton(TeamCenter_Choice);
        Mikulov->setObjectName(QStringLiteral("Mikulov"));
        Mikulov->setGeometry(QRect(20, 220, 100, 35));
        Natchitoches = new QPushButton(TeamCenter_Choice);
        Natchitoches->setObjectName(QStringLiteral("Natchitoches"));
        Natchitoches->setGeometry(QRect(20, 260, 100, 35));
        Pune = new QPushButton(TeamCenter_Choice);
        Pune->setObjectName(QStringLiteral("Pune"));
        Pune->setGeometry(QRect(130, 20, 100, 35));
        Rayong = new QPushButton(TeamCenter_Choice);
        Rayong->setObjectName(QStringLiteral("Rayong"));
        Rayong->setGeometry(QRect(130, 60, 100, 35));
        Reynosa = new QPushButton(TeamCenter_Choice);
        Reynosa->setObjectName(QStringLiteral("Reynosa"));
        Reynosa->setGeometry(QRect(130, 100, 100, 35));
        Sidney = new QPushButton(TeamCenter_Choice);
        Sidney->setObjectName(QStringLiteral("Sidney"));
        Sidney->setGeometry(QRect(130, 140, 100, 35));
        Suzhou = new QPushButton(TeamCenter_Choice);
        Suzhou->setObjectName(QStringLiteral("Suzhou"));
        Suzhou->setGeometry(QRect(130, 180, 100, 35));
        Welkenraedt = new QPushButton(TeamCenter_Choice);
        Welkenraedt->setObjectName(QStringLiteral("Welkenraedt"));
        Welkenraedt->setGeometry(QRect(130, 220, 100, 35));
        Xian = new QPushButton(TeamCenter_Choice);
        Xian->setObjectName(QStringLiteral("Xian"));
        Xian->setGeometry(QRect(130, 260, 100, 35));
        Cancel = new QPushButton(TeamCenter_Choice);
        Cancel->setObjectName(QStringLiteral("Cancel"));
        Cancel->setGeometry(QRect(75, 300, 100, 35));

        retranslateUi(TeamCenter_Choice);

        QMetaObject::connectSlotsByName(TeamCenter_Choice);
    } // setupUi

    void retranslateUi(QWidget *TeamCenter_Choice)
    {
        TeamCenter_Choice->setWindowTitle(QApplication::translate("TeamCenter_Choice", "Choose City", nullptr));
        Atit->setText(QApplication::translate("TeamCenter_Choice", "Atit", nullptr));
        Ava->setText(QApplication::translate("TeamCenter_Choice", "Ava", nullptr));
        Guadalajara->setText(QApplication::translate("TeamCenter_Choice", "Guadalajara", nullptr));
        Karad->setText(QApplication::translate("TeamCenter_Choice", "Karad", nullptr));
        Lebanon->setText(QApplication::translate("TeamCenter_Choice", "Lebanon", nullptr));
        Mikulov->setText(QApplication::translate("TeamCenter_Choice", "Mikulov", nullptr));
        Natchitoches->setText(QApplication::translate("TeamCenter_Choice", "Natchitoches", nullptr));
        Pune->setText(QApplication::translate("TeamCenter_Choice", "Pune", nullptr));
        Rayong->setText(QApplication::translate("TeamCenter_Choice", "Rayong", nullptr));
        Reynosa->setText(QApplication::translate("TeamCenter_Choice", "Reynosa", nullptr));
        Sidney->setText(QApplication::translate("TeamCenter_Choice", "Sidney", nullptr));
        Suzhou->setText(QApplication::translate("TeamCenter_Choice", "Suzhou", nullptr));
        Welkenraedt->setText(QApplication::translate("TeamCenter_Choice", "Welkenraedt", nullptr));
        Xian->setText(QApplication::translate("TeamCenter_Choice", "Xian", nullptr));
        Cancel->setText(QApplication::translate("TeamCenter_Choice", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TeamCenter_Choice: public Ui_TeamCenter_Choice {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEAMCENTER_CHOICE_H
