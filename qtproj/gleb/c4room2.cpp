#include "c4room2.h"
#include "ui_c4room2.h"

c4room2::c4room2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::c4room2)
{
    ui->setupUi(this);
}

c4room2::~c4room2()
{
    delete ui;
}
