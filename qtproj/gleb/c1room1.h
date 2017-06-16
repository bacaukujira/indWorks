#ifndef C1ROOM1_H
#define C1ROOM1_H

#include <QDialog>

namespace Ui {
class c1room1;
}

class c1room1 : public QDialog
{
    Q_OBJECT

public:
    explicit c1room1(QWidget *parent = 0);
    ~c1room1();

private:
    Ui::c1room1 *ui;
};

#endif // C1ROOM1_H
