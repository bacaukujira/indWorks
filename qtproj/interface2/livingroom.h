#ifndef LIVINGROOM_H
#define LIVINGROOM_H

#include <QDialog>

namespace Ui {
class Livingroom;
}

class Livingroom : public QDialog
{
    Q_OBJECT

public:
    explicit Livingroom(QWidget *parent = 0);
    ~Livingroom();

private:
    Ui::Livingroom *ui;
};

#endif // LIVINGROOM_H
