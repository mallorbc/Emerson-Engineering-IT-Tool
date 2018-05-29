#include "custom_functions.h"


std::wstring ConvertToWide(std::string ItemToConvert){
    //the windows API needs a format of string called wide in order to work properly
    //there is almost certainly a better way to do this
    std::wstring ConvertedItem;
   ConvertedItem = std::wstring(ItemToConvert.begin(), ItemToConvert.end());
    return ConvertedItem;
}

void Run_with_option(std::wstring path,std::wstring option,bool show){
    //called eventually by App_button_action. See windows API documentation for detail on how ShellExecute works
    //takes the path of the thing being excuted, the option(run normal, run as admin,open), and whether to show it or not
    if(show){
        ShellExecute(NULL, option.c_str(),path.c_str(), NULL,NULL,SW_SHOWNORMAL);
    }
    else{
       ShellExecute(NULL, option.c_str(),path.c_str(), NULL,NULL,SW_HIDE);
    }
}



std::string QueryDatabaseApp(int app_id,std::string option_filter){
    //Queries the table called "Application" under the sqlite datbase
    //pulls infromation based on the app id and whether it nees the run, doc, or location path

    //see database.cpp and database.h to see how the DataBase object works
    //pointer or type DataBase
    DataBase *DB;
    //create new object
    DB = new DataBase();
    //query select is used to pick with column of the table to use, default is 0, 0 is the first entry
    int query_select=0;
    std::string return_value;
    if(option_filter=="run"){
        //defines where you look for the "run path" will use the 3rd column Application table
        query_select = 2;
    }
    else if(option_filter=="locate"){
         //defines where you look for the "locate path" will use the 4th column Application table
        query_select = 3;
    }
    else if(option_filter=="doc"){
         //defines where you look for the "doc path" will use the 5th column in the Application table
        query_select=4;
    }
    //pointer of query type
    QSqlQuery *q;
    //defines what database will be used
    q = new QSqlQuery(QSqlDatabase::database("MyDB"));
    //prepares the query based on passed app id
    q->prepare("SELECT * FROM Application WHERE App_ID = :input");
    q->bindValue(":input",app_id);
    //runs the query
    q->exec();
    //starts on the first entry
    q->first();
    //assigns the value depending on query_select, which is determined by whether we are looking for doc, run, or locate
    return_value = q->value(query_select).toString().toStdString();
    //used to see output of database in the console, used to debug
    //qDebug()<<QString::fromStdString(return_value);
    //deletes q to prevent memory leaks
    delete q;
    //close the database, see database.cpp
    DB->Disconnect_db();
    //deletes DB to prevent memory leaks
    delete DB;
    return return_value;
}

std::string QueryDataBaseResources(int resource_id, std::string option_filter){
    //same as QueryDatabaseApp with slight changes, such as using a differnt table and having different options

    DataBase *DB;
    DB = new DataBase();
    int query_select=0;
    std::string return_value;
    if(option_filter=="path"){
        query_select = 2;
    }
    QSqlQuery *q;
    q = new QSqlQuery(QSqlDatabase::database("MyDB"));
    q->prepare("SELECT * FROM Resources WHERE Resource_id = :input");
    q->bindValue(":input",resource_id);
    q->exec();
    q->first();
    return_value = q->value(query_select).toString().toStdString();
   // qDebug()<<QString::fromStdString(return_value);
    delete q;
    DB->Disconnect_db();
    delete DB;
    return return_value;
}


void App_button_action(int app_id, std::string option_filter, bool show){
    //gets the path by querying the database
    call_path = QueryDatabaseApp(app_id,option_filter);
    //see LocationExists to see how this bool operation works, there is a known bug where it does not work with shortcuts and give a false negative
    if(LocationExists(call_path)){
        //converts the string to a wide string for the purpose of working with the Windows API
        wide_call_path = ConvertToWide(call_path);
    //the next 6 lines are used to determine which option to pass to the Run_with_option function
    if(option_filter=="run"){
        option = "runas";
    }
    else{
        option = "open";
    }
    //converts the string to a wide string for the purpose of working with the Windows API
    wide_option=ConvertToWide(option);
    Run_with_option(wide_call_path,wide_option,show);
    return;
    }
    else{
        //creates and shows a warning message if the file or location can not be found, gives a false negative for some cases
        //see the warning.cpp and warning.h files for more information
        Warning *message;
        std::string warning_message = "The file or location trying to be accessed at:\n" + call_path + "\ncan not be found.\nPlease make sure you are connected to the network, have the correct privileges, and that the file path is correct.";
        message = new Warning(0,warning_message);
        message->show();
        return;
    }
}

void OpenURL(int resource_id,std::string browser_choice){
    //gets the url from the resource id, converts it to a format the Windows API takes, then executes the command to open it in the browser of choice
    std::string URL = QueryDataBaseResources(resource_id,"path");
    std::wstring Wide_URL = ConvertToWide(URL);
    std::wstring Wide_browser = ConvertToWide(browser_choice);
    std::wstring Wide_browser_option = ConvertToWide("runas");
    ShellExecute(NULL, Wide_browser_option.c_str(), Wide_browser.c_str(), Wide_URL.c_str(), NULL, SW_SHOWNORMAL);
}

void Send_Email(std::string email_type){
    //using the command line options that outlook gives,it builds a command that will automatically write emails
    //queries that database to find the needed information
    if(email_type=="new"){
        std::string attachment = QueryDataBaseResources(1,"path");
        std::string subject = QueryDataBaseResources(2,"path");
        std::string body = QueryDataBaseResources(3,"path");
        std::wstring email_option = ConvertToWide("open");
        std::wstring app_name = ConvertToWide("OUTLOOK.exe");
        std::string app_ext = "/a "+attachment+" /m \"?subject="+subject+"&body="+body;
        std::wstring wide_app_ext = ConvertToWide(app_ext);
    ShellExecute(NULL, email_option.c_str(), app_name.c_str(), wide_app_ext.c_str(), NULL, SW_HIDE);
    }
    else if(email_type=="data"){
        std::string subject = QueryDataBaseResources(4,"path");
        std::string body = QueryDataBaseResources(5,"path");
        std::wstring email_option = ConvertToWide("open");
        std::wstring app_name = ConvertToWide("OUTLOOK.exe");
        std::string app_ext = "/c ipm.note /m \"&subject="+subject+"&body="+body;
        std::wstring wide_app_ext = ConvertToWide(app_ext);
        ShellExecute(NULL, email_option.c_str(), app_name.c_str(), wide_app_ext.c_str(), NULL, SW_HIDE);

    }

}

void Printer_setup(int resource_id){
    //gets the path of the printer location, excutes it abnd opens the location
    std::string printer_path = QueryDataBaseResources(resource_id,"path");
    std::wstring wide_printer_path = ConvertToWide(printer_path);
    std::wstring printer_option = ConvertToWide("open");
    ShellExecute(NULL, printer_option.c_str(),wide_printer_path.c_str(), NULL,NULL,SW_SHOWNORMAL);

}

void MakeDirectory(std::string directory){
    //checks to see if a directory exists, if it doesn't the directory is made
    QDir dir(directory.c_str());
    if (!dir.exists()) {
        dir.mkpath(directory.c_str());
    }
}

bool CopyDirectory(QString sourceFolder, QString destFolder){
    //recursively copies all the files from a host directory, takes a source to copy from, and where to copy it as arguments
    bool success = false;
            QDir sourceDir(sourceFolder);
            //the source doesn't exist, can't copy
            if(!sourceDir.exists())
                return false;

            QDir destDir(destFolder);
            if(!destDir.exists())
                //creats the destination directory if it doesn't exist
                destDir.mkdir(destFolder);
//copies all files with directory seperators
            QStringList files = sourceDir.entryList(QDir::Files);
            for(int i = 0; i< files.count(); i++) {
                QString srcName = sourceFolder + QDir::separator() + files[i];
                QString destName = destFolder + QDir::separator() + files[i];
                success = QFile::copy(srcName, destName);
                if(!success)
                    return false;
            }

            files.clear();
            files = sourceDir.entryList(QDir::AllDirs | QDir::NoDotAndDotDot);
            for(int i = 0; i< files.count(); i++)
            {
                QString srcName = sourceFolder + QDir::separator() + files[i];
                QString destName = destFolder + QDir::separator() + files[i];
                success = CopyDirectory(srcName, destName);
                if(!success)
                    return false;
            }

            return true;

}

void Install_TeamCenter(int City_id){
    //installs teamcenter based on the city id
    //teamcenter needs certain directories to exist to install  correctly, this makes sure those exist, and that any files needed are copied
    QString QOrigin;
    QString QDest;
    //next 7 lines queries the Teamcenter table on the database and makes any directories that are needed
    std::string Directory;
    Directory = QueryDataBaseTeamCenter(City_id,"Dir1");
    MakeDirectory(Directory);
    Directory = QueryDataBaseTeamCenter(City_id,"Dir2");
    MakeDirectory(Directory);
    Directory = QueryDataBaseTeamCenter(City_id,"Dir3");
    MakeDirectory(Directory);
    //queries the location of where the java files are on the server, and where they need to be.  Then copies them over
    QOrigin = QString::fromStdString(QueryDataBaseTeamCenter(City_id,"JavaServer"));
    QDest = QString::fromStdString(QueryDataBaseTeamCenter(City_id,"JavaLocal"));
    QDir dir(QDest);
    if(dir.exists()){
        //removes all files in the directory, will be added again
        dir.removeRecursively();
    }
    CopyDirectory(QOrigin,QDest);
    //next 5 lines prepare to open the needed URL as an admin
    std::string URL = QueryDataBaseTeamCenter(City_id,"URL");
    std::wstring Wide_URL = ConvertToWide(URL);
    std::wstring Wide_browser = ConvertToWide("C:\\Program Files (x86)\\Internet Explorer\\iexplore.exe");
    std::wstring Wide_browser_option = ConvertToWide("runas");
    ShellExecute(NULL, Wide_browser_option.c_str(), Wide_browser.c_str(), Wide_URL.c_str(), NULL, SW_SHOWNORMAL);
}

std::string QueryDataBaseTeamCenter(int City_id, std::string option_filter){
   //same as QueryDatabaseApp with slight changes, such as using a differnt table and having different options
    DataBase *DB;
    DB = new DataBase();
    int query_select=0;
    std::string return_value;
    if(option_filter=="Dir1"){
        query_select = 2;
    }
    else if(option_filter=="Dir2"){
        query_select = 3;
    }
    else if(option_filter=="Dir3"){
        query_select = 4;
    }
    else if(option_filter=="JavaLocal"){
        query_select = 5;
    }
    else if(option_filter=="JavaServer"){
        query_select = 6;
    }
    else if(option_filter=="URL"){
        query_select = 7;
    }
    QSqlQuery *q;
    q = new QSqlQuery(QSqlDatabase::database("MyDB"));
    q->prepare("SELECT * FROM TeamCenter WHERE ID = :input");
    q->bindValue(":input",City_id);
    q->exec();
    q->first();
    return_value = q->value(query_select).toString().toStdString();
    //qDebug()<<QString::fromStdString(return_value);
    delete q;
    DB->Disconnect_db();
    delete DB;
    return return_value;
}

bool LocationExists(std::string Directory){
    //checks whether the directory or file exists in this path.
    //KNOWN BUG: gives a false negative with shortcuts
    if (QDir(Directory.c_str()).exists()||fileExists(QString::fromStdString(Directory))==true){
        return true;
    }
    else{
        return false;
    }
}

bool fileExists(QString path) {
    QFileInfo check_file(path);
    // check if file exists and if yes: Is it really a file and no directory?
    //checks if a file exists, attempts to work with shortcuts, but no dice
    if(check_file.exists()||(check_file.isSymLink()==1)){
        return true;
    } else {
        return false;
    }
}
