#ifndef LOGON_SCREEN_H
#define LOGON_SCREEN_H

#include <QDialog>

namespace Ui {
class Logon_screen;
}

class Logon_screen : public QDialog
{
    Q_OBJECT

public:
    explicit Logon_screen(QWidget *parent = 0);
    ~Logon_screen();

private slots:
    void on_Password_entry_returnPressed();


    void on_Continue_clicked();

    void on_Cancel_clicked();

private:
    Ui::Logon_screen *ui;
};

#endif // LOGON_SCREEN_H
