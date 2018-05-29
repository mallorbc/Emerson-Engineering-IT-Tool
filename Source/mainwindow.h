#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();


private slots:
    void on_Standard_Set_Up_clicked();

    void on_SnagIt_clicked();

    void on_Good_Sync_clicked();

    void on_RefProp_clicked();

    void on_Adobe_Acrobat_clicked();

    void on_NX_clicked();

    void on_CAD_InvMechElect_clicked();

    void on_CAD_InvMech_clicked();

    void on_CAD_Mech_clicked();

    void on_CAD_Elect_clicked();

    void on_CAD_license_clicked();

    void on_Logitech_drivers_clicked();

    void on_DellDrivers_clicked();

    void on_NvidiaDrivers_clicked();

    void on_ConnexionDrivers_clicked();

    void on_MatLab_clicked();


    void on_Kronos_clicked();

    void on_New_comp_email_clicked();

    void on_Data_transfer_email_clicked();

    void on_Printer_Setup_clicked();

    void on_TeamCenter_clicked();

    void on_ELT_clicked();

    void on_Compressor_Calc_clicked();

    void on_CPIDRate_clicked();

    void on_CPIDView_clicked();

    void on_MathCad_clicked();


private:
    Ui::MainWindow *ui;
    //Acrobat_choice *choose_acrobat = NULL;
};


#endif // MAINWINDOW_H
