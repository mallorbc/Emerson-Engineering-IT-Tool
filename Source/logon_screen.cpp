#include "logon_screen.h"
#include "ui_logon_screen.h"
#include "mainwindow.h"
//#include <string>
#include <QString>
#include <QDesktopWidget>
#include "globals.h"

QString correct_pass = "123456";
Logon_screen::Logon_screen(QWidget *parent) :
    //QDialog(parent),
    //prevents the x button from being an option in the top right corner
    QDialog(parent, Qt::WindowTitleHint),
    ui(new Ui::Logon_screen)
{
    ui->setupUi(this);
    //sets fixed size
    this->setFixedSize(QSize(400, 194));
    //sets the menu in the middle of the screen
    QRect scr = QApplication::desktop()->screenGeometry();
    move( scr.center() - rect().center() );
    ui->Password_entry->setEchoMode(QLineEdit::Password);
}

Logon_screen::~Logon_screen()
{
    delete ui;
}


void Logon_screen::on_Password_entry_returnPressed()
{
    //if the password entered is correct is opens the mainwindow and closes the logon screen
    if(ui->Password_entry->text()==correct_pass){
        MainWindow *Window = new MainWindow;
        Window->show();
        this->close();
    }

}


void Logon_screen::on_Continue_clicked()
{
    //if the password entered is correct is opens the mainwindow and closes the logon screen
    if(ui->Password_entry->text()==correct_pass){
        MainWindow *Window = new MainWindow;
        Window->show();
        this->close();
    }

}

void Logon_screen::on_Cancel_clicked()
{
//closes menu and ends the instance of the application
this->close();

}
