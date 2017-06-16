#ifndef C1ROOM2_H
#define C1ROOM2_H

#include <QDialog>

namespace Ui {
class c1room2;
}

class c1room2 : public QDialog
{
    Q_OBJECT

public:
    explicit c1room2(QWidget *parent = 0);
    ~c1room2();

private:
    Ui::c1room2 *ui;
};

#endif // C1ROOM2_H
