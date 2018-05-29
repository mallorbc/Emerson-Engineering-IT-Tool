#include "nxchoice.h"
#include "ui_nxchoice.h"
#include "custom_functions.h"
#include "globals.h"

NXChoice::NXChoice(QWidget *parent) :
    //QDialog(parent),
    //prevents the x button from being an option in the top right corner
    QDialog(parent, Qt::WindowTitleHint),
    ui(new Ui::NXChoice)
{
    ui->setupUi(this);
    this->setFixedSize(QSize(146, 179));
}

NXChoice::~NXChoice()
{
    delete ui;
}

void NXChoice::on_NX10_clicked()
{
    //see custom_functions.cpp and custom_functions.h to see how App_button_action works
    App_button_action(12,"run",true);
    //closes the menu
    this->close();
}

void NXChoice::on_NX11_clicked()
{
    //see custom_functions.cpp and custom_functions.h to see how App_button_action works
    App_button_action(13,"run",true);
    this->close();
}

void NXChoice::on_NX_gen_clicked()
{
    //see custom_functions.cpp and custom_functions.h to see how App_button_action works
    App_button_action(10,"run",true);
    //closes the menu
    this->close();
}

void NXChoice::on_NX_Cancel_clicked()
{
    //closes the menu
     this->close();
}
