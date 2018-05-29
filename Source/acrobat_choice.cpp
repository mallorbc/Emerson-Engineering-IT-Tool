#include "acrobat_choice.h"
#include "ui_acrobat_choice.h"
#include "custom_functions.h"
#include "globals.h"

Acrobat_choice::Acrobat_choice(QWidget *parent) :
    //default code
    //QDialog(parent),
    //makes it so that the user can not click the x button in top right
    QDialog(parent, Qt::WindowTitleHint),
    ui(new Ui::Acrobat_choice)
{
    ui->setupUi(this);
    //sets fixed size of menu
    this->setFixedSize(QSize(146, 255));
}

Acrobat_choice::~Acrobat_choice()
{
    delete ui;
}

void Acrobat_choice::on_Cancel_clicked()
{ 
    //closes the menu if the user clicks cancel
    this->close();
}

void Acrobat_choice::on_AcrobatDC_clicked()
{
    //see custom_functions.cpp to see how the App_button_action is defined
    //basically, it takes 3 parameters the id of the item in the database, what should happend(is it a document, a directory, or a file to run)
    // and whether or not to show the application being run.  Most of the time is true, unless desired to be a silent install for example.

    App_button_action(8,"run",false);
    //closes the menu
    this->close();
}

void Acrobat_choice::on_Acrobat12_clicked()
{
    //see custom_functions.cpp to see how the App_button_action is defined
    //basically, it takes 3 parameters the id of the item in the database, what should happend(is it a document, a directory, or a file to run)
    // and whether or not to show the application being run.  Most of the time is true, unless desired to be a silent install for example.

   App_button_action(7,"run",true);
    //closes the menu
   this->close();
}

void Acrobat_choice::on_Acrobat11_clicked()
{
    //see custom_functions.cpp to see how the App_button_action is defined
    //basically, it takes 3 parameters the id of the item in the database, what should happend(is it a document, a directory, or a file to run)
    // and whether or not to show the application being run.  Most of the time is true, unless desired to be a silent install for example.

   App_button_action(6,"run",true);
    //closes the menu
   this->close();
}

void Acrobat_choice::on_Acobat_gen_clicked()
{
    //see custom_functions.cpp to see how the App_button_action is defined
    //basically, it takes 3 parameters the id of the item in the database, what should happend(is it a document, a directory, or a file to run)
    // and whether or not to show the application being run.  Most of the time is true, unless desired to be a silent install for example.

   App_button_action(10,"run",true);
    //closes the menu
   this->close();
}

void Acrobat_choice::on_Acrobat10_clicked()
{
    //see custom_functions.cpp to see how the App_button_action is defined
    //basically, it takes 3 parameters the id of the item in the database, what should happend(is it a document, a directory, or a file to run)
    // and whether or not to show the application being run.  Most of the time is true, unless desired to be a silent install for example.

   App_button_action(5,"run",true);
    //closes the menu
   this->close();
}
