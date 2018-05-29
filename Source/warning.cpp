#include "warning.h"
#include "ui_warning.h"

Warning::Warning(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Warning)
{
    ui->setupUi(this);
    ui->TextBox->selectAll();
    ui->TextBox->setFontPointSize(8);
}
Warning::Warning(QWidget *parent,std::string warning_message):
    QWidget(parent, Qt::WindowTitleHint),
    ui(new Ui::Warning)
{
    ui->setupUi(this);
    //sets fixed size of menu
    this->setFixedSize(QSize(322, 221));
    //sets the text of the warning
    ui->TextBox->setText(QString::fromStdString(warning_message.c_str()));
    //selects all the text
    QTextCursor cursor = ui->TextBox->textCursor();
    ui->TextBox->selectAll();
    //sets text size
    ui->TextBox->setFontPointSize(8);
    //deselects all the text
    ui->TextBox->setTextCursor(cursor);
}

Warning::~Warning()
{
    delete ui;
}

void Warning::on_Close_clicked()
{
    //closes the menu
    this->close();
}
