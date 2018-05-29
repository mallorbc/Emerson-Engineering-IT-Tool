#ifndef NXCHOICE_H
#define NXCHOICE_H

#include <QDialog>

namespace Ui {
class NXChoice;
}

class NXChoice : public QDialog
{
    Q_OBJECT

public:
    explicit NXChoice(QWidget *parent = 0);
    ~NXChoice();

private slots:
    void on_NX10_clicked();

    void on_NX11_clicked();

    void on_NX_gen_clicked();

    void on_NX_Cancel_clicked();

private:
    Ui::NXChoice *ui;
};

#endif // NXCHOICE_H
