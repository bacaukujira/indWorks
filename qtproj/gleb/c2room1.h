#ifndef C2ROOM1_H
#define C2ROOM1_H

#include <QDialog>

namespace Ui {
class c2room1;
}

class c2room1 : public QDialog
{
    Q_OBJECT

public:
    explicit c2room1(QWidget *parent = 0);
    ~c2room1();

private:
    Ui::c2room1 *ui;
};

#endif // C2ROOM1_H
