#ifndef ROOM2_H
#define ROOM2_H

#include <QDialog>

namespace Ui {
class room2;
}

class room2 : public QDialog
{
    Q_OBJECT

public:
    explicit room2(QWidget *parent = 0);
    ~room2();

private:
    Ui::room2 *ui;
};

#endif // ROOM2_H
