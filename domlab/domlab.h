#ifndef DOMLAB_H
#define DOMLAB_H

#include <QMainWindow>

namespace Ui {
class domlab;
}

class domlab : public QMainWindow
{
    Q_OBJECT

public:
    explicit domlab(QWidget *parent = 0);
    ~domlab();

private:
    Ui::domlab *ui;
};

#endif // DOMLAB_H
