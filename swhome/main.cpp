#include "swhome.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    swhome w;
    w.show();

    return a.exec();
}
