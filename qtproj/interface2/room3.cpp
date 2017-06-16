#include "room3.h"
#include "ui_room3.h"

Room3::Room3(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Room3)
{
    ui->setupUi(this);
}

Room3::~Room3()
{
    delete ui;
}
