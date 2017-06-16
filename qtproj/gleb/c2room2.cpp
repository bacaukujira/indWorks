#include "c2room2.h"
#include "ui_c2room2.h"

c2room2::c2room2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::c2room2)
{
    ui->setupUi(this);
}

c2room2::~c2room2()
{
    delete ui;
}
