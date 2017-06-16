#ifndef C4ROOM2_H
#define C4ROOM2_H

#include <QDialog>

namespace Ui {
class c4room2;
}

class c4room2 : public QDialog
{
    Q_OBJECT

public:
    explicit c4room2(QWidget *parent = 0);
    ~c4room2();

private:
    Ui::c4room2 *ui;
};

#endif // C4ROOM2_H
