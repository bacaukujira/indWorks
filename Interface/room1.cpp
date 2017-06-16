#include "room1.h"
#include "ui_room1.h"

room1::room1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::room1)
{
    ui->setupUi(this);
}

room1::~room1()
{
    delete ui;
}
