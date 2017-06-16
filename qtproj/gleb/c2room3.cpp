#include "c2room3.h"
#include "ui_c2room3.h"

c2room3::c2room3(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::c2room3)
{
    ui->setupUi(this);
}

c2room3::~c2room3()
{
    delete ui;
}
