#include "restroom3.h"
#include "ui_restroom3.h"

restroom3::restroom3(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::restroom3)
{
    ui->setupUi(this);
}

restroom3::~restroom3()
{
    delete ui;
}
