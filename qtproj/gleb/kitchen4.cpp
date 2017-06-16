#include "kitchen4.h"
#include "ui_kitchen4.h"

Kitchen4::Kitchen4(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Kitchen4)
{
    ui->setupUi(this);
}

Kitchen4::~Kitchen4()
{
    delete ui;
}
