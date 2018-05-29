#include <string>
#include "globals.h"
#include <windows.h>
#include <shellapi.h>
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <Qdir>
#include "QProcess"
#include <QString>
#include<QIcon>
#include <QString>
#include <QCoreApplication>
#include <QDebug>
#include <QDesktopWidget>
#include <stdlib.h>
#include <database.h>
#include "acrobat_choice.h"
#include "warning.h"
#include "nxchoice.h"
#include "logon_screen.h"
#include "teamcenter_choice.h"
#include "custom_functions.h"
//above are all the imported libraries and files I wrote that are needed to make the main window work, add as needed


//These are global variables, they are defined in globals.h, they are global because they are used in many of the files
//global variable declarations start
std::string call_path;
std::string option;
std::wstring wide_call_path;
std::wstring wide_option;
//old can be removed if desired
bool testing = 1;
//global variable declaration end


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //sets fixed size of app, as it is easier to guarantee the look of the app that way, and scaling is not really needed
    //maybe add functionality for scaling in future?
    this->setFixedSize(QSize(600, 370));
    //next two lines make sure that application is opened in the middle of the screen
    QRect scr = QApplication::desktop()->screenGeometry();
    move( scr.center() - rect().center() );
}

MainWindow::~MainWindow()
{
    delete ui;
}

//on_<insert here>_clicked is pretty self explanatory but it runs the code whenever that button is clicked
//same with other types of signals/slots


void MainWindow::on_Standard_Set_Up_clicked()
{
    //see custom_functions.cpp to see how the App_button_action is defined
    //basically, it takes 3 parameters the id of the item in the database, what should happend(is it a document, a directory, or a file to run)
    // and whether or not to show the application being run.  Most of the time is true, unless desired to be a silent install for example.
    //ui->Support_Docs->isChecked == 1 means that it is checking whether the checkbox is marked to open support docs when it runs
    //ui->Open_location does something similar but rather, checks if the file location should be opened rather than ran.
    //The current set up is that you can open support docs and the location, open support docs and run the application, but if you open the location, it will not run

        if(ui->Support_Docs->isChecked()==1){
             App_button_action(1,"doc",true);
        }
        if(ui->Open_location->isChecked()==1){
             App_button_action(1,"locate",true);
        }
        else{
            App_button_action(1,"run",true);
        }
}

void MainWindow::on_SnagIt_clicked()
{
    //see custom_functions.cpp to see how the App_button_action is defined
    //basically, it takes 3 parameters the id of the item in the database, what should happend(is it a document, a directory, or a file to run)
    // and whether or not to show the application being run.  Most of the time is true, unless desired to be a silent install for example.
    //ui->Support_Docs->isChecked == 1 means that it is checking whether the checkbox is marked to open support docs when it runs
    //ui->Open_location does something similar but rather, checks if the file location should be opened rather than ran.
    //The current set up is that you can open support docs and the location, open support docs and run the application, but if you open the location, it will not run

        if(ui->Support_Docs->isChecked()==1){
             App_button_action(2,"doc",true);
        }
        if(ui->Open_location->isChecked()==1){
             App_button_action(2,"locate",true);
        }
        else{
            App_button_action(2,"run",true);
        }
    }

void MainWindow::on_Good_Sync_clicked()
{
    //see custom_functions.cpp to see how the App_button_action is defined
    //basically, it takes 3 parameters the id of the item in the database, what should happend(is it a document, a directory, or a file to run)
    // and whether or not to show the application being run.  Most of the time is true, unless desired to be a silent install for example.
    //ui->Support_Docs->isChecked == 1 means that it is checking whether the checkbox is marked to open support docs when it runs
    //ui->Open_location does something similar but rather, checks if the file location should be opened rather than ran.
    //The current set up is that you can open support docs and the location, open support docs and run the application, but if you open the location, it will not run

        if(ui->Support_Docs->isChecked()==1){
             App_button_action(3,"doc",true);
        }
        if(ui->Open_location->isChecked()==1){
             App_button_action(3,"locate",true);
        }
        else{
            App_button_action(3,"run",true);
        }
}

void MainWindow::on_RefProp_clicked()
{
    //see custom_functions.cpp to see how the App_button_action is defined
    //basically, it takes 3 parameters the id of the item in the database, what should happend(is it a document, a directory, or a file to run)
    // and whether or not to show the application being run.  Most of the time is true, unless desired to be a silent install for example.
    //ui->Support_Docs->isChecked == 1 means that it is checking whether the checkbox is marked to open support docs when it runs
    //ui->Open_location does something similar but rather, checks if the file location should be opened rather than ran.
    //The current set up is that you can open support docs and the location, open support docs and run the application, but if you open the location, it will not run

        if(ui->Support_Docs->isChecked()==1){
             App_button_action(4,"doc",true);
        }
        if(ui->Open_location->isChecked()==1){
             App_button_action(4,"locate",true);
        }
        else{
            App_button_action(4,"run",true);
        }   
}

void MainWindow::on_Adobe_Acrobat_clicked()
{
    //see custom_functions.cpp to see how the App_button_action is defined
    //basically, it takes 3 parameters the id of the item in the database, what should happend(is it a document, a directory, or a file to run)
    // and whether or not to show the application being run.  Most of the time is true, unless desired to be a silent install for example.
    //ui->Support_Docs->isChecked == 1 means that it is checking whether the checkbox is marked to open support docs when it runs
    //ui->Open_location does something similar but rather, checks if the file location should be opened rather than ran.
    //The current set up is that you can open support docs and the location, open support docs and run the application, but if you open the location, it will not run

        if(ui->Support_Docs->isChecked()==1){
             App_button_action(9,"doc",true);
        }
        if(ui->Open_location->isChecked()==1){
             App_button_action(9,"locate",true);
        }
        else{
            //opens up a window for selection of a specific version of Acrobat, see acrobat_choice.cpp and acrobat_choice.h for more details
            Acrobat_choice choice(this);
            choice.exec();
        }
}

void MainWindow::on_NX_clicked()
{
    //see custom_functions.cpp to see how the App_button_action is defined
    //basically, it takes 3 parameters the id of the item in the database, what should happend(is it a document, a directory, or a file to run)
    // and whether or not to show the application being run.  Most of the time is true, unless desired to be a silent install for example.
    //ui->Support_Docs->isChecked == 1 means that it is checking whether the checkbox is marked to open support docs when it runs
    //ui->Open_location does something similar but rather, checks if the file location should be opened rather than ran.
    //The current set up is that you can open support docs and the location, open support docs and run the application, but if you open the location, it will not run

    if(ui->Support_Docs->isChecked()==1){
         App_button_action(11,"doc",true);
    }
    if(ui->Open_location->isChecked()==1){
         App_button_action(11,"locate",true);
    }
        else{
        //opens up a window for the selection of which version of NX to install. See nxchoice.cpp and nxchoice.h for more details
            NXChoice choice(this);
            choice.exec();
        }
}

void MainWindow::on_CAD_InvMechElect_clicked()
{
    //see custom_functions.cpp to see how the App_button_action is defined
    //basically, it takes 3 parameters the id of the item in the database, what should happend(is it a document, a directory, or a file to run)
    // and whether or not to show the application being run.  Most of the time is true, unless desired to be a silent install for example.
    //ui->Support_Docs->isChecked == 1 means that it is checking whether the checkbox is marked to open support docs when it runs
    //ui->Open_location does something similar but rather, checks if the file location should be opened rather than ran.
    //The current set up is that you can open support docs and the location, open support docs and run the application, but if you open the location, it will not run

    if(ui->Support_Docs->isChecked()==1){
         App_button_action(15,"doc",true);
    }
    if(ui->Open_location->isChecked()==1){
         App_button_action(15,"locate",true);
    }
    else{
        App_button_action(15,"run",true);
    }

}

void MainWindow::on_CAD_InvMech_clicked()
{
    //see custom_functions.cpp to see how the App_button_action is defined
    //basically, it takes 3 parameters the id of the item in the database, what should happend(is it a document, a directory, or a file to run)
    // and whether or not to show the application being run.  Most of the time is true, unless desired to be a silent install for example.
    //ui->Support_Docs->isChecked == 1 means that it is checking whether the checkbox is marked to open support docs when it runs
    //ui->Open_location does something similar but rather, checks if the file location should be opened rather than ran.
    //The current set up is that you can open support docs and the location, open support docs and run the application, but if you open the location, it will not run

    if(ui->Support_Docs->isChecked()==1){
         App_button_action(16,"doc",true);
    }
    if(ui->Open_location->isChecked()==1){
         App_button_action(16,"locate",true);
    }
    else{
        App_button_action(16,"run",true);
    }

}

void MainWindow::on_CAD_Mech_clicked()
{
    //see custom_functions.cpp to see how the App_button_action is defined
    //basically, it takes 3 parameters the id of the item in the database, what should happend(is it a document, a directory, or a file to run)
    // and whether or not to show the application being run.  Most of the time is true, unless desired to be a silent install for example.
    //ui->Support_Docs->isChecked == 1 means that it is checking whether the checkbox is marked to open support docs when it runs
    //ui->Open_location does something similar but rather, checks if the file location should be opened rather than ran.
    //The current set up is that you can open support docs and the location, open support docs and run the application, but if you open the location, it will not run

    if(ui->Support_Docs->isChecked()==1){
         App_button_action(17,"doc",true);
    }
    if(ui->Open_location->isChecked()==1){
         App_button_action(17,"locate",true);
    }
    else{
        App_button_action(17,"run",true);
    }

}

void MainWindow::on_CAD_Elect_clicked()
{
    //see custom_functions.cpp to see how the App_button_action is defined
    //basically, it takes 3 parameters the id of the item in the database, what should happend(is it a document, a directory, or a file to run)
    // and whether or not to show the application being run.  Most of the time is true, unless desired to be a silent install for example.
    //ui->Support_Docs->isChecked == 1 means that it is checking whether the checkbox is marked to open support docs when it runs
    //ui->Open_location does something similar but rather, checks if the file location should be opened rather than ran.
    //The current set up is that you can open support docs and the location, open support docs and run the application, but if you open the location, it will not run

    if(ui->Support_Docs->isChecked()==1){
         App_button_action(18,"doc",true);
    }
    if(ui->Open_location->isChecked()==1){
         App_button_action(18,"locate",true);
    }
    else{
        App_button_action(18,"run",true);
    }

}

void MainWindow::on_CAD_license_clicked()
{
    //see custom_functions.cpp to see how the App_button_action is defined
    //basically, it takes 3 parameters the id of the item in the database, what should happend(is it a document, a directory, or a file to run)
    // and whether or not to show the application being run.  Most of the time is true, unless desired to be a silent install for example.
    //ui->Support_Docs->isChecked == 1 means that it is checking whether the checkbox is marked to open support docs when it runs
    //ui->Open_location does something similar but rather, checks if the file location should be opened rather than ran.
    //The current set up is that you can open support docs and the location, open support docs and run the application, but if you open the location, it will not run

    if(ui->Support_Docs->isChecked()==1){
         App_button_action(19,"doc",true);
    }
    if(ui->Open_location->isChecked()==1){
         App_button_action(19,"locate",true);
    }
    else{
        App_button_action(19,"run",true);
    }

}

void MainWindow::on_Logitech_drivers_clicked()
{
    //see custom_functions.cpp to see how the App_button_action is defined
    //basically, it takes 3 parameters the id of the item in the database, what should happend(is it a document, a directory, or a file to run)
    // and whether or not to show the application being run.  Most of the time is true, unless desired to be a silent install for example.
    //ui->Support_Docs->isChecked == 1 means that it is checking whether the checkbox is marked to open support docs when it runs
    //ui->Open_location does something similar but rather, checks if the file location should be opened rather than ran.
    //The current set up is that you can open support docs and the location, open support docs and run the application, but if you open the location, it will not run

    if(ui->Support_Docs->isChecked()==1){
         App_button_action(20,"doc",true);
    }
    if(ui->Open_location->isChecked()==1){
         App_button_action(20,"locate",true);
    }
    else{
        App_button_action(20,"run",true);
    }

}

void MainWindow::on_DellDrivers_clicked()
{
    //see custom_functions.cpp and custom_functions.h to see how OpenURL works.
    //basically it takes the id of the resource for the database, as well as what to run it in, most of the time that being IE

    OpenURL(6,"iexplore");

}

void MainWindow::on_NvidiaDrivers_clicked()
{
    //see custom_functions.cpp and custom_functions.h to see how OpenURL works.
    //basically it takes the id of the resource for the database, as well as what to run it in, most of the time that being IE

    OpenURL(7,"iexplore");
}

void MainWindow::on_ConnexionDrivers_clicked()
{
    //see custom_functions.cpp to see how the App_button_action is defined
    //basically, it takes 3 parameters the id of the item in the database, what should happend(is it a document, a directory, or a file to run)
    // and whether or not to show the application being run.  Most of the time is true, unless desired to be a silent install for example.
    //ui->Support_Docs->isChecked == 1 means that it is checking whether the checkbox is marked to open support docs when it runs
    //ui->Open_location does something similar but rather, checks if the file location should be opened rather than ran.
    //The current set up is that you can open support docs and the location, open support docs and run the application, but if you open the location, it will not run

    if(ui->Support_Docs->isChecked()==1){
         App_button_action(21,"doc",true);
    }
    if(ui->Open_location->isChecked()==1){
         App_button_action(21,"locate",true);
    }
    else{
        App_button_action(21,"run",true);
    }

}

void MainWindow::on_MatLab_clicked()
{
    //see custom_functions.cpp to see how the App_button_action is defined
    //basically, it takes 3 parameters the id of the item in the database, what should happend(is it a document, a directory, or a file to run)
    // and whether or not to show the application being run.  Most of the time is true, unless desired to be a silent install for example.
    //ui->Support_Docs->isChecked == 1 means that it is checking whether the checkbox is marked to open support docs when it runs
    //ui->Open_location does something similar but rather, checks if the file location should be opened rather than ran.
    //The current set up is that you can open support docs and the location, open support docs and run the application, but if you open the location, it will not run

    if(ui->Support_Docs->isChecked()==1){
         App_button_action(22,"doc",true);
    }
    if(ui->Open_location->isChecked()==1){
         App_button_action(22,"locate",true);
    }
    else{
        App_button_action(22,"run",true);
    }


}

void MainWindow::on_Kronos_clicked()
{
    //see custom_functions.cpp and custom_functions.h to see how OpenURL works.
    //basically it takes the id of the resource for the database, as well as what to run it in, most of the time that being IE

    OpenURL(8,"iexplore");
}

void MainWindow::on_New_comp_email_clicked()
{
    //see custom_functions.cpp and custom_functions.h to see how the Send_Email works
    //basically, I coded it for 2 types of emails, data transfer, or new computers
    //it takes what the email should be(either "new" or "data") and builds the message from there

    Send_Email("new");
}

void MainWindow::on_Data_transfer_email_clicked()
{
    //see custom_functions.cpp and custom_functions.h to see how the Send_Email works
    //basically, I coded it for 2 types of emails, data transfer, or new computers
    //it takes what the email should be(either "new" or "data") and builds the message from there

    Send_Email("data");
}

void MainWindow::on_Printer_Setup_clicked()
{
    //see custom_functions.cpp and custom_functions.h to see how the Printer_setup works
    //takes an id that is looked up in the database, then opens that location
    Printer_setup(9);
}

void MainWindow::on_TeamCenter_clicked()
{
    //see teamcenter_choice.cpp and teamcenter_choice.h for more information on how this works.
    //it will pull up a new menu and allow the user to select the what install of teamcenter they want
    TeamCenter_Choice choice(this);
    choice.exec();
}

void MainWindow::on_ELT_clicked()
{
    //see custom_functions.cpp to see how the App_button_action is defined
    //basically, it takes 3 parameters the id of the item in the database, what should happend(is it a document, a directory, or a file to run)
    // and whether or not to show the application being run.  Most of the time is true, unless desired to be a silent install for example.
    //ui->Support_Docs->isChecked == 1 means that it is checking whether the checkbox is marked to open support docs when it runs
    //ui->Open_location does something similar but rather, checks if the file location should be opened rather than ran.
    //The current set up is that you can open support docs and the location, open support docs and run the application, but if you open the location, it will not run

    if(ui->Support_Docs->isChecked()==1){
         App_button_action(23,"doc",true);
    }
    if(ui->Open_location->isChecked()==1){
         App_button_action(23,"locate",true);
    }
    else{
        App_button_action(23,"run",false);
    }

}

void MainWindow::on_Compressor_Calc_clicked()
{
    //see custom_functions.cpp to see how the App_button_action is defined
    //basically, it takes 3 parameters the id of the item in the database, what should happend(is it a document, a directory, or a file to run)
    // and whether or not to show the application being run.  Most of the time is true, unless desired to be a silent install for example.
    //ui->Support_Docs->isChecked == 1 means that it is checking whether the checkbox is marked to open support docs when it runs
    //ui->Open_location does something similar but rather, checks if the file location should be opened rather than ran.
    //The current set up is that you can open support docs and the location, open support docs and run the application, but if you open the location, it will not run

    if(ui->Support_Docs->isChecked()==1){
         App_button_action(24,"doc",true);
    }
    if(ui->Open_location->isChecked()==1){
         App_button_action(24,"locate",true);
    }
    else{
        App_button_action(24,"run",true);
    }

}

void MainWindow::on_CPIDRate_clicked()
{
    //see custom_functions.cpp to see how the App_button_action is defined
    //basically, it takes 3 parameters the id of the item in the database, what should happend(is it a document, a directory, or a file to run)
    // and whether or not to show the application being run.  Most of the time is true, unless desired to be a silent install for example.
    //ui->Support_Docs->isChecked == 1 means that it is checking whether the checkbox is marked to open support docs when it runs
    //ui->Open_location does something similar but rather, checks if the file location should be opened rather than ran.
    //The current set up is that you can open support docs and the location, open support docs and run the application, but if you open the location, it will not run

    if(ui->Support_Docs->isChecked()==1){
         App_button_action(25,"doc",true);
    }
    if(ui->Open_location->isChecked()==1){
         App_button_action(25,"locate",true);
    }
    else{
        App_button_action(25,"run",true);
    }
}

void MainWindow::on_CPIDView_clicked()
{
    //see custom_functions.cpp to see how the App_button_action is defined
    //basically, it takes 3 parameters the id of the item in the database, what should happend(is it a document, a directory, or a file to run)
    // and whether or not to show the application being run.  Most of the time is true, unless desired to be a silent install for example.
    //ui->Support_Docs->isChecked == 1 means that it is checking whether the checkbox is marked to open support docs when it runs
    //ui->Open_location does something similar but rather, checks if the file location should be opened rather than ran.
    //The current set up is that you can open support docs and the location, open support docs and run the application, but if you open the location, it will not run

    if(ui->Support_Docs->isChecked()==1){
         App_button_action(26,"doc",true);
    }
    if(ui->Open_location->isChecked()==1){
         App_button_action(26,"locate",true);
    }
    else{
        App_button_action(26,"run",true);
    }
}

void MainWindow::on_MathCad_clicked()
{
    //see custom_functions.cpp to see how the App_button_action is defined
    //basically, it takes 3 parameters the id of the item in the database, what should happend(is it a document, a directory, or a file to run)
    // and whether or not to show the application being run.  Most of the time is true, unless desired to be a silent install for example.
    //ui->Support_Docs->isChecked == 1 means that it is checking whether the checkbox is marked to open support docs when it runs
    //ui->Open_location does something similar but rather, checks if the file location should be opened rather than ran.
    //The current set up is that you can open support docs and the location, open support docs and run the application, but if you open the location, it will not run

    if(ui->Support_Docs->isChecked()==1){
         App_button_action(27,"doc",true);
    }
    if(ui->Open_location->isChecked()==1){
         App_button_action(27,"locate",true);
    }
    else{
        App_button_action(27,"run",false);
    }

}


