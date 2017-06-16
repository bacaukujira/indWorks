#include "kitchen3.h"
#include "ui_kitchen3.h"

Kitchen3::Kitchen3(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Kitchen3)
{
    ui->setupUi(this);
}

Kitchen3::~Kitchen3()
{
    delete ui;
}
