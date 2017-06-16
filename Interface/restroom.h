#ifndef RESTROOM_H
#define RESTROOM_H

#include <QDialog>

namespace Ui {
class Restroom;
}

class Restroom : public QDialog
{
    Q_OBJECT

public:
    explicit Restroom(QWidget *parent = 0);
    ~Restroom();

private:
    Ui::Restroom *ui;
};

#endif // RESTROOM_H
