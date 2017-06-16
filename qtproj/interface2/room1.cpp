#include "room1.h"
#include "ui_room1.h"

Room1::Room1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Room1)
{
    ui->setupUi(this);
}

Room1::~Room1()
{
    delete ui;
}
