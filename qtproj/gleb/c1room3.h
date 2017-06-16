#ifndef C1ROOM3_H
#define C1ROOM3_H

#include <QDialog>

namespace Ui {
class c1room3;
}

class c1room3 : public QDialog
{
    Q_OBJECT

public:
    explicit c1room3(QWidget *parent = 0);
    ~c1room3();

private:
    Ui::c1room3 *ui;
};

#endif // C1ROOM3_H
