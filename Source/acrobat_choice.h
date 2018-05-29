#ifndef ACROBAT_CHOICE_H
#define ACROBAT_CHOICE_H
#include <QDialog>
//#include "globals.h"


namespace Ui {
class Acrobat_choice;
}

class Acrobat_choice : public QDialog
{
    Q_OBJECT

public:
    explicit Acrobat_choice(QWidget *parent = 0);
    ~Acrobat_choice();

private slots:
    void on_Cancel_clicked();

    void on_AcrobatDC_clicked();

    void on_Acrobat12_clicked();

    void on_Acrobat11_clicked();

    void on_Acobat_gen_clicked();

    void on_Acrobat10_clicked();

private:
    Ui::Acrobat_choice *ui;

};

#endif // ACROBAT_CHOICE_H
