#include "kitchen2.h"
#include "ui_kitchen2.h"

Kitchen2::Kitchen2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Kitchen2)
{
    ui->setupUi(this);
}

Kitchen2::~Kitchen2()
{
    delete ui;
}
