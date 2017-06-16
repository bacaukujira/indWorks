#include "livingroom1.h"
#include "ui_livingroom1.h"

livingroom1::livingroom1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::livingroom1)
{
    ui->setupUi(this);
}

livingroom1::~livingroom1()
{
    delete ui;
}
