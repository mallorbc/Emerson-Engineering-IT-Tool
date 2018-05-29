/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *Standard_Set_Up;
    QCheckBox *Support_Docs;
    QLabel *Emerson_logo;
    QPushButton *SnagIt;
    QPushButton *Good_Sync;
    QPushButton *RefProp;
    QCheckBox *Open_location;
    QPushButton *Adobe_Acrobat;
    QPushButton *NX;
    QPushButton *CAD_InvMechElect;
    QPushButton *CAD_InvMech;
    QPushButton *CAD_Mech;
    QPushButton *CAD_Elect;
    QPushButton *CAD_license;
    QPushButton *Logitech_drivers;
    QPushButton *DellDrivers;
    QPushButton *NvidiaDrivers;
    QPushButton *ConnexionDrivers;
    QPushButton *MatLab;
    QPushButton *Kronos;
    QPushButton *New_comp_email;
    QPushButton *Data_transfer_email;
    QPushButton *Printer_Setup;
    QPushButton *TeamCenter;
    QPushButton *ELT;
    QPushButton *CPIDView;
    QPushButton *CPIDRate;
    QPushButton *Compressor_Calc;
    QPushButton *MathCad;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(600, 370);
        QIcon icon;
        icon.addFile(QStringLiteral("emerson_logoicon.ico"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setAutoFillBackground(false);
        Standard_Set_Up = new QPushButton(centralWidget);
        Standard_Set_Up->setObjectName(QStringLiteral("Standard_Set_Up"));
        Standard_Set_Up->setGeometry(QRect(340, 170, 100, 35));
        Support_Docs = new QCheckBox(centralWidget);
        Support_Docs->setObjectName(QStringLiteral("Support_Docs"));
        Support_Docs->setGeometry(QRect(480, 340, 111, 21));
        Emerson_logo = new QLabel(centralWidget);
        Emerson_logo->setObjectName(QStringLiteral("Emerson_logo"));
        Emerson_logo->setGeometry(QRect(0, 0, 631, 371));
        Emerson_logo->setPixmap(QPixmap(QString::fromUtf8(":/Photos/emerson-electric_resize2.jpg")));
        SnagIt = new QPushButton(centralWidget);
        SnagIt->setObjectName(QStringLiteral("SnagIt"));
        SnagIt->setGeometry(QRect(340, 120, 100, 35));
        Good_Sync = new QPushButton(centralWidget);
        Good_Sync->setObjectName(QStringLiteral("Good_Sync"));
        Good_Sync->setGeometry(QRect(120, 320, 100, 35));
        RefProp = new QPushButton(centralWidget);
        RefProp->setObjectName(QStringLiteral("RefProp"));
        RefProp->setGeometry(QRect(340, 70, 100, 35));
        Open_location = new QCheckBox(centralWidget);
        Open_location->setObjectName(QStringLiteral("Open_location"));
        Open_location->setGeometry(QRect(480, 320, 111, 17));
        Adobe_Acrobat = new QPushButton(centralWidget);
        Adobe_Acrobat->setObjectName(QStringLiteral("Adobe_Acrobat"));
        Adobe_Acrobat->setGeometry(QRect(10, 20, 100, 35));
        NX = new QPushButton(centralWidget);
        NX->setObjectName(QStringLiteral("NX"));
        NX->setGeometry(QRect(230, 320, 100, 35));
        CAD_InvMechElect = new QPushButton(centralWidget);
        CAD_InvMechElect->setObjectName(QStringLiteral("CAD_InvMechElect"));
        CAD_InvMechElect->setGeometry(QRect(10, 270, 100, 35));
        CAD_InvMech = new QPushButton(centralWidget);
        CAD_InvMech->setObjectName(QStringLiteral("CAD_InvMech"));
        CAD_InvMech->setGeometry(QRect(10, 120, 100, 35));
        CAD_Mech = new QPushButton(centralWidget);
        CAD_Mech->setObjectName(QStringLiteral("CAD_Mech"));
        CAD_Mech->setGeometry(QRect(10, 220, 100, 35));
        CAD_Elect = new QPushButton(centralWidget);
        CAD_Elect->setObjectName(QStringLiteral("CAD_Elect"));
        CAD_Elect->setGeometry(QRect(10, 70, 100, 35));
        CAD_license = new QPushButton(centralWidget);
        CAD_license->setObjectName(QStringLiteral("CAD_license"));
        CAD_license->setGeometry(QRect(10, 170, 100, 35));
        Logitech_drivers = new QPushButton(centralWidget);
        Logitech_drivers->setObjectName(QStringLiteral("Logitech_drivers"));
        Logitech_drivers->setGeometry(QRect(230, 70, 100, 35));
        DellDrivers = new QPushButton(centralWidget);
        DellDrivers->setObjectName(QStringLiteral("DellDrivers"));
        DellDrivers->setGeometry(QRect(120, 220, 100, 35));
        NvidiaDrivers = new QPushButton(centralWidget);
        NvidiaDrivers->setObjectName(QStringLiteral("NvidiaDrivers"));
        NvidiaDrivers->setGeometry(QRect(230, 270, 100, 35));
        ConnexionDrivers = new QPushButton(centralWidget);
        ConnexionDrivers->setObjectName(QStringLiteral("ConnexionDrivers"));
        ConnexionDrivers->setGeometry(QRect(120, 20, 100, 35));
        MatLab = new QPushButton(centralWidget);
        MatLab->setObjectName(QStringLiteral("MatLab"));
        MatLab->setGeometry(QRect(230, 170, 100, 35));
        Kronos = new QPushButton(centralWidget);
        Kronos->setObjectName(QStringLiteral("Kronos"));
        Kronos->setGeometry(QRect(230, 20, 100, 35));
        New_comp_email = new QPushButton(centralWidget);
        New_comp_email->setObjectName(QStringLiteral("New_comp_email"));
        New_comp_email->setGeometry(QRect(230, 220, 100, 35));
        Data_transfer_email = new QPushButton(centralWidget);
        Data_transfer_email->setObjectName(QStringLiteral("Data_transfer_email"));
        Data_transfer_email->setGeometry(QRect(120, 170, 100, 35));
        Printer_Setup = new QPushButton(centralWidget);
        Printer_Setup->setObjectName(QStringLiteral("Printer_Setup"));
        Printer_Setup->setGeometry(QRect(340, 20, 100, 35));
        TeamCenter = new QPushButton(centralWidget);
        TeamCenter->setObjectName(QStringLiteral("TeamCenter"));
        TeamCenter->setGeometry(QRect(340, 220, 100, 35));
        ELT = new QPushButton(centralWidget);
        ELT->setObjectName(QStringLiteral("ELT"));
        ELT->setGeometry(QRect(120, 270, 100, 35));
        CPIDView = new QPushButton(centralWidget);
        CPIDView->setObjectName(QStringLiteral("CPIDView"));
        CPIDView->setGeometry(QRect(120, 120, 100, 35));
        CPIDRate = new QPushButton(centralWidget);
        CPIDRate->setObjectName(QStringLiteral("CPIDRate"));
        CPIDRate->setGeometry(QRect(120, 70, 100, 35));
        Compressor_Calc = new QPushButton(centralWidget);
        Compressor_Calc->setObjectName(QStringLiteral("Compressor_Calc"));
        Compressor_Calc->setGeometry(QRect(10, 320, 100, 35));
        MathCad = new QPushButton(centralWidget);
        MathCad->setObjectName(QStringLiteral("MathCad"));
        MathCad->setGeometry(QRect(230, 120, 100, 35));
        MainWindow->setCentralWidget(centralWidget);
        Emerson_logo->raise();
        SnagIt->raise();
        Good_Sync->raise();
        RefProp->raise();
        Open_location->raise();
        Adobe_Acrobat->raise();
        NX->raise();
        CAD_InvMechElect->raise();
        CAD_InvMech->raise();
        CAD_Mech->raise();
        CAD_Elect->raise();
        CAD_license->raise();
        Logitech_drivers->raise();
        DellDrivers->raise();
        NvidiaDrivers->raise();
        ConnexionDrivers->raise();
        MatLab->raise();
        Kronos->raise();
        Support_Docs->raise();
        New_comp_email->raise();
        Data_transfer_email->raise();
        Standard_Set_Up->raise();
        Printer_Setup->raise();
        TeamCenter->raise();
        ELT->raise();
        CPIDView->raise();
        CPIDRate->raise();
        Compressor_Calc->raise();
        MathCad->raise();

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Engineering IT Sofware Installation Tool - Created By Blake Mallory", nullptr));
        Standard_Set_Up->setText(QApplication::translate("MainWindow", "Standard Set Up", nullptr));
        Support_Docs->setText(QApplication::translate("MainWindow", "Open Install Docs", nullptr));
        Emerson_logo->setText(QString());
        SnagIt->setText(QApplication::translate("MainWindow", "SnagIT", nullptr));
        Good_Sync->setText(QApplication::translate("MainWindow", "Good Sync", nullptr));
        RefProp->setText(QApplication::translate("MainWindow", "RefProp", nullptr));
        Open_location->setText(QApplication::translate("MainWindow", "Open File Location", nullptr));
        Adobe_Acrobat->setText(QApplication::translate("MainWindow", "Adobe Acrobat", nullptr));
        NX->setText(QApplication::translate("MainWindow", "NX", nullptr));
        CAD_InvMechElect->setText(QApplication::translate("MainWindow", "AutoCad \n"
"Inv, Mech, Elect", nullptr));
        CAD_InvMech->setText(QApplication::translate("MainWindow", "AutoCad\n"
"Inv, Mech", nullptr));
        CAD_Mech->setText(QApplication::translate("MainWindow", "AutoCad\n"
"Mech", nullptr));
        CAD_Elect->setText(QApplication::translate("MainWindow", "AutoCad\n"
"Elect", nullptr));
        CAD_license->setText(QApplication::translate("MainWindow", "AutoCad License\n"
"Fix", nullptr));
        Logitech_drivers->setText(QApplication::translate("MainWindow", "Logitech\n"
"Drivers", nullptr));
        DellDrivers->setText(QApplication::translate("MainWindow", "Dell Drivers", nullptr));
        NvidiaDrivers->setText(QApplication::translate("MainWindow", "Nvidia Drivers", nullptr));
        ConnexionDrivers->setText(QApplication::translate("MainWindow", "Connexion Drivers", nullptr));
        MatLab->setText(QApplication::translate("MainWindow", "MatLab/SimuLink", nullptr));
        Kronos->setText(QApplication::translate("MainWindow", "Kronos", nullptr));
        New_comp_email->setText(QApplication::translate("MainWindow", "New Computer\n"
"Email", nullptr));
        Data_transfer_email->setText(QApplication::translate("MainWindow", "Data Transfer\n"
"Email", nullptr));
        Printer_Setup->setText(QApplication::translate("MainWindow", "Printer Set Up", nullptr));
        TeamCenter->setText(QApplication::translate("MainWindow", "TeamCenter", nullptr));
        ELT->setText(QApplication::translate("MainWindow", "ELT", nullptr));
        CPIDView->setText(QApplication::translate("MainWindow", "CPID View", nullptr));
        CPIDRate->setText(QApplication::translate("MainWindow", "CPID Rate", nullptr));
        Compressor_Calc->setText(QApplication::translate("MainWindow", "Compressor\n"
"Calculator", nullptr));
        MathCad->setText(QApplication::translate("MainWindow", "MathCad", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
