#include "restroom4.h"
#include "ui_restroom4.h"

restroom4::restroom4(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::restroom4)
{
    ui->setupUi(this);
}

restroom4::~restroom4()
{
    delete ui;
}
