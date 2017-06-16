#ifndef ROOM3_H
#define ROOM3_H

#include <QDialog>

namespace Ui {
class room3;
}

class room3 : public QDialog
{
    Q_OBJECT

public:
    explicit room3(QWidget *parent = 0);
    ~room3();

private:
    Ui::room3 *ui;
};

#endif // ROOM3_H
