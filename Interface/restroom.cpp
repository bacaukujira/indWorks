#include "restroom.h"
#include "ui_restroom.h"

Restroom::Restroom(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Restroom)
{
    ui->setupUi(this);
}

Restroom::~Restroom()
{
    delete ui;
}
