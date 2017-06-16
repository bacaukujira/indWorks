#ifndef ROOM1_H
#define ROOM1_H

#include <QDialog>

namespace Ui {
class room1;
}

class room1 : public QDialog
{
    Q_OBJECT

public:
    explicit room1(QWidget *parent = 0);
    ~room1();

private:
    Ui::room1 *ui;
};

#endif // ROOM1_H
