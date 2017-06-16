#include "c1room1.h"
#include "ui_c1room1.h"

c1room1::c1room1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::c1room1)
{
    ui->setupUi(this);
}

c1room1::~c1room1()
{
    delete ui;
}
