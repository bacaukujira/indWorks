#include "kitchen.h"
#include "ui_kitchen.h"

kitchen::kitchen(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::kitchen)
{
    ui->setupUi(this);
}

kitchen::~kitchen()
{
    delete ui;
}
