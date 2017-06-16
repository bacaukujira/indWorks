#ifndef ROOM1_H
#define ROOM1_H

#include <QDialog>

namespace Ui {
class Room1;
}

class Room1 : public QDialog
{
    Q_OBJECT

public:
    explicit Room1(QWidget *parent = 0);
    ~Room1();

private:
    Ui::Room1 *ui;
};

#endif // ROOM1_H
