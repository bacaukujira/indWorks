#ifndef C3ROOM1_H
#define C3ROOM1_H

#include <QDialog>

namespace Ui {
class c3room1;
}

class c3room1 : public QDialog
{
    Q_OBJECT

public:
    explicit c3room1(QWidget *parent = 0);
    ~c3room1();

private:
    Ui::c3room1 *ui;
};

#endif // C3ROOM1_H
