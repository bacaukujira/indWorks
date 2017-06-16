#include "restroom1.h"
#include "ui_restroom1.h"

restroom1::restroom1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::restroom1)
{
    ui->setupUi(this);
}

restroom1::~restroom1()
{
    delete ui;
}
