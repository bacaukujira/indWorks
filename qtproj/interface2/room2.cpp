#include "room2.h"
#include "ui_room2.h"

Room2::Room2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Room2)
{
    ui->setupUi(this);
}

Room2::~Room2()
{
    delete ui;
}
