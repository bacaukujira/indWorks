#ifndef ROOM3_H
#define ROOM3_H

#include <QDialog>

namespace Ui {
class Room3;
}

class Room3 : public QDialog
{
    Q_OBJECT

public:
    explicit Room3(QWidget *parent = 0);
    ~Room3();

private:
    Ui::Room3 *ui;
};

#endif // ROOM3_H
