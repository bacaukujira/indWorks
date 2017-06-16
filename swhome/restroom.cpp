#include "restroom.h"
#include "ui_restroom.h"

restroom::restroom(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::restroom)
{
    ui->setupUi(this);
}

restroom::~restroom()
{
    delete ui;
}
