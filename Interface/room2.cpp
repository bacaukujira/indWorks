#include "room2.h"
#include "ui_room2.h"

room2::room2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::room2)
{
    ui->setupUi(this);
}

room2::~room2()
{
    delete ui;
}
