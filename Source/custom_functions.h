#ifndef CUSTOM_FUNCTIONS_H
#define CUSTOM_FUNCTIONS_H
#include <windows.h>
#include <shellapi.h>
#include <QSqlQuery>
#include <QWidget>
#include <string>
#include <Qstring>
#include <QCoreApplication>
#include <QString>
#include <QVariant>
#include <QDebug>
#include <QDir>
#include <QFileInfo>
#include "globals.h"
#include "database.h"
#include "warning.h"

//defintions of all custom code that is called in this application
std::wstring ConvertToWide(std::string ItemToConvert);
void Run_with_option(std::wstring path,std::wstring option,bool show);
std::string QueryDatabaseApp(int app_id,std::string option_filter);
void OpenURL(int resource_id,std::string browser_choice);
void App_button_action(int app_id,std::string option_filter,bool show);
void Send_Email(std::string email_type);
void Connect_To_DB();
std:: string QueryDataBaseResources(int resource_id,std::string option_filter);
void Printer_setup(int resource_id);
bool CopyDirectory(QString sourceFolder, QString destFolder);
void MakeDirectory(std::string directory);
void Install_TeamCenter(int City_id);
std::string QueryDataBaseTeamCenter(int City_id,std::string option_filter);
bool LocationExists(std::string Directory);
bool fileExists(QString path);

#endif // CUSTOM_FUNCTIONS_H
