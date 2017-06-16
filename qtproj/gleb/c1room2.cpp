#include "c1room2.h"
#include "ui_c1room2.h"

c1room2::c1room2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::c1room2)
{
    ui->setupUi(this);
}

c1room2::~c1room2()
{
    delete ui;
}
