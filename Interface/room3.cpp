#include "room3.h"
#include "ui_room3.h"

room3::room3(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::room3)
{
    ui->setupUi(this);
}

room3::~room3()
{
    delete ui;
}
