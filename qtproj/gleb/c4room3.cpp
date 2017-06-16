#include "c4room3.h"
#include "ui_c4room3.h"

c4room3::c4room3(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::c4room3)
{
    ui->setupUi(this);
}

c4room3::~c4room3()
{
    delete ui;
}
