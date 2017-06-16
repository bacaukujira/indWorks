#ifndef ROOM2_H
#define ROOM2_H

#include <QDialog>

namespace Ui {
class Room2;
}

class Room2 : public QDialog
{
    Q_OBJECT

public:
    explicit Room2(QWidget *parent = 0);
    ~Room2();

private:
    Ui::Room2 *ui;
};

#endif // ROOM2_H
