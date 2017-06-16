#include "domlab.h"
#include "ui_domlab.h"

domlab::domlab(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::domlab)
{
    ui->setupUi(this);
}

domlab::~domlab()
{
    delete ui;
}
