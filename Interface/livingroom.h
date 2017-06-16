#ifndef LIVINGROOM_H
#define LIVINGROOM_H

#include <QDialog>

namespace Ui {
class LivingRoom;
}

class LivingRoom : public QDialog
{
    Q_OBJECT

public:
    explicit LivingRoom(QWidget *parent = 0);
    ~LivingRoom();

private:
    Ui::LivingRoom *ui;
};

#endif // LIVINGROOM_H
