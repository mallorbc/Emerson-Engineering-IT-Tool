#ifndef WARNING_H
#define WARNING_H

#include <QWidget>

namespace Ui {
class Warning;
}

class Warning : public QWidget
{
    Q_OBJECT

public:
    explicit Warning(QWidget *parent = 0);
    ~Warning();
    Warning(QWidget *parent = 0,std::string warning_message = "default");

private slots:
    void on_Close_clicked();

private:
    Ui::Warning *ui;
};

#endif // WARNING_H
