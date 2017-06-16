#include "c3room2.h"
#include "ui_c3room2.h"

c3room2::c3room2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::c3room2)
{
    ui->setupUi(this);
}

c3room2::~c3room2()
{
    delete ui;
}
