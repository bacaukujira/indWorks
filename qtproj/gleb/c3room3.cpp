#include "c3room3.h"
#include "ui_c3room3.h"

c3room3::c3room3(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::c3room3)
{
    ui->setupUi(this);
}

c3room3::~c3room3()
{
    delete ui;
}
