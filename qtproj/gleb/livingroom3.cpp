#include "livingroom3.h"
#include "ui_livingroom3.h"

livingroom3::livingroom3(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::livingroom3)
{
    ui->setupUi(this);
}

livingroom3::~livingroom3()
{
    delete ui;
}
