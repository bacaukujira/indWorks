#include "kitchen1.h"
#include "ui_kitchen1.h"

Kitchen1::Kitchen1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Kitchen1)
{
    ui->setupUi(this);
}

Kitchen1::~Kitchen1()
{
    delete ui;
}
