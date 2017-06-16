#include "c1room3.h"
#include "ui_c1room3.h"

c1room3::c1room3(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::c1room3)
{
    ui->setupUi(this);
}

c1room3::~c1room3()
{
    delete ui;
}
