#include "c3room1.h"
#include "ui_c3room1.h"

c3room1::c3room1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::c3room1)
{
    ui->setupUi(this);
}

c3room1::~c3room1()
{
    delete ui;
}
