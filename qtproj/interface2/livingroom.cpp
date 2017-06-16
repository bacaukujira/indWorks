#include "livingroom.h"
#include "ui_livingroom.h"

Livingroom::Livingroom(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Livingroom)
{
    ui->setupUi(this);
}

Livingroom::~Livingroom()
{
    delete ui;
}
