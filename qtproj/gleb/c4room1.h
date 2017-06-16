#ifndef C4ROOM1_H
#define C4ROOM1_H

#include <QDialog>

namespace Ui {
class c4room1;
}

class c4room1 : public QDialog
{
    Q_OBJECT

public:
    explicit c4room1(QWidget *parent = 0);
    ~c4room1();

private:
    Ui::c4room1 *ui;
};

#endif // C4ROOM1_H
