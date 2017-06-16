#include "livingroom4.h"
#include "ui_livingroom4.h"

livingroom4::livingroom4(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::livingroom4)
{
    ui->setupUi(this);
}

livingroom4::~livingroom4()
{
    delete ui;
}
