#ifndef C2ROOM2_H
#define C2ROOM2_H

#include <QDialog>

namespace Ui {
class c2room2;
}

class c2room2 : public QDialog
{
    Q_OBJECT

public:
    explicit c2room2(QWidget *parent = 0);
    ~c2room2();

private:
    Ui::c2room2 *ui;
};

#endif // C2ROOM2_H
