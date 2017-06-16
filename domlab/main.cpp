#include "domlab.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    domlab w;
    w.show();

    return a.exec();
}
