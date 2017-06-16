#include "c2room1.h"
#include "ui_c2room1.h"

c2room1::c2room1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::c2room1)
{
    ui->setupUi(this);
}

c2room1::~c2room1()
{
    delete ui;
}
