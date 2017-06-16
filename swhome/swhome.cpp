#include "swhome.h"
#include "ui_swhome.h"

swhome::swhome(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::swhome)
{
    ui->setupUi(this);
}

swhome::~swhome()
{
    delete ui;
}
