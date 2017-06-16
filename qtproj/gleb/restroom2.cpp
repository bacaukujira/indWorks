#include "restroom2.h"
#include "ui_restroom2.h"

restroom2::restroom2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::restroom2)
{
    ui->setupUi(this);
}

restroom2::~restroom2()
{
    delete ui;
}
