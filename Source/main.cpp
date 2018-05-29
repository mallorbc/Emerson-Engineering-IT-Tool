#include "mainwindow.h"
#include "logon_screen.h"
#include <QApplication>

//Written by Blake Mallory co-op spring 2018
//good idea to keep a log of changes made to code here?

int main(int argc, char *argv[])
{
    //needed to support highres screens
	QApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
    QApplication a(argc, argv);
    //code that allows you to create a login screen if desired, I made 2 identical apps, one with a password, one without so that
    //I knew that I could always update the database of the locked one, since you are the only one you can use it
    //current password is 123456 you change the password in the logon_screen.cpp.
    //if you want to turn that back on, comment out Mainwindow w; and w.show and uncomment the other code

    //Logon_screen *screen = new Logon_screen;
    //screen->show();

    MainWindow w;
    w.show();

    return a.exec();
}
