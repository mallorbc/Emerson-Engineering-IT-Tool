#ifndef TEAMCENTER_CHOICE_H
#define TEAMCENTER_CHOICE_H

#include <QDialog>

namespace Ui {
class TeamCenter_Choice;
}

class TeamCenter_Choice : public QDialog
{
    Q_OBJECT

public:
    explicit TeamCenter_Choice(QWidget *parent = 0);
    ~TeamCenter_Choice();

private slots:
    void on_Atit_clicked();


    void on_Ava_clicked();

    void on_Guadalajara_clicked();

    void on_Karad_clicked();

    void on_Lebanon_clicked();

    void on_Mikulov_clicked();

    void on_Natchitoches_clicked();

    void on_Pune_clicked();

    void on_Rayong_clicked();

    void on_Reynosa_clicked();

    void on_Sidney_clicked();

    void on_Suzhou_clicked();

    void on_Welkenraedt_clicked();

    void on_Xian_clicked();

    void on_Cancel_clicked();

private:
    Ui::TeamCenter_Choice *ui;
};

#endif // TEAMCENTER_CHOICE_H
