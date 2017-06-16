#include "c4room1.h"
#include "ui_c4room1.h"

c4room1::c4room1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::c4room1)
{
    ui->setupUi(this);
}

c4room1::~c4room1()
{
    delete ui;
}
