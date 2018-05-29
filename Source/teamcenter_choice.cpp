#include "teamcenter_choice.h"
#include "ui_teamcenter_choice.h"
#include "custom_functions.h"

TeamCenter_Choice::TeamCenter_Choice(QWidget *parent) :
    //QDialog(parent),
    //prevents the x button from being an option in the top right corner
     QDialog(parent, Qt::WindowTitleHint),
     ui(new Ui::TeamCenter_Choice)
{
    ui->setupUi(this);
    //sets the fixed size of the menu
    this->setFixedSize(QSize(254, 354));
}

TeamCenter_Choice::~TeamCenter_Choice()
{
    delete ui;
}

void TeamCenter_Choice::on_Atit_clicked()
{
//installs teamcenter based on the city ID
Install_TeamCenter(1);
this->close();
}


void TeamCenter_Choice::on_Ava_clicked()
{
 //installs teamcenter based on the city ID
Install_TeamCenter(2);
this->close();
}

void TeamCenter_Choice::on_Guadalajara_clicked()
{
//installs teamcenter based on the city ID
Install_TeamCenter(3);
this->close();
}

void TeamCenter_Choice::on_Karad_clicked()
{
    //installs teamcenter based on the city ID
Install_TeamCenter(4);
this->close();
}

void TeamCenter_Choice::on_Lebanon_clicked()
{
    //installs teamcenter based on the city ID
Install_TeamCenter(5);
this->close();
}

void TeamCenter_Choice::on_Mikulov_clicked()
{
    //installs teamcenter based on the city ID
Install_TeamCenter(6);
this->close();
}

void TeamCenter_Choice::on_Natchitoches_clicked()
{
    //installs teamcenter based on the city ID
Install_TeamCenter(7);
this->close();
}

void TeamCenter_Choice::on_Pune_clicked()
{
    //installs teamcenter based on the city ID
Install_TeamCenter(8);
this->close();
}

void TeamCenter_Choice::on_Rayong_clicked()
{
    //installs teamcenter based on the city ID
Install_TeamCenter(9);
this->close();
}

void TeamCenter_Choice::on_Reynosa_clicked()
{
    //installs teamcenter based on the city ID
Install_TeamCenter(10);
this->close();
}

void TeamCenter_Choice::on_Sidney_clicked()
{
    //installs teamcenter based on the city ID
Install_TeamCenter(11);
this->close();
}

void TeamCenter_Choice::on_Suzhou_clicked()
{
    //installs teamcenter based on the city ID
Install_TeamCenter(12);
this->close();
}

void TeamCenter_Choice::on_Welkenraedt_clicked()
{
    //installs teamcenter based on the city ID
Install_TeamCenter(13);
this->close();
}

void TeamCenter_Choice::on_Xian_clicked()
{
    //installs teamcenter based on the city ID
Install_TeamCenter(14);
this->close();
}

void TeamCenter_Choice::on_Cancel_clicked()
{
    //closes the menu
this->close();
}
