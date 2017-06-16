#include "livingroom.h"
#include "ui_livingroom.h"

LivingRoom::LivingRoom(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LivingRoom)
{
    ui->setupUi(this);
}

LivingRoom::~LivingRoom()
{
    delete ui;
}
