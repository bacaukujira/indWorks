#include "livingroom2.h"
#include "ui_livingroom2.h"

livingroom2::livingroom2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::livingroom2)
{
    ui->setupUi(this);
}

livingroom2::~livingroom2()
{
    delete ui;
}
