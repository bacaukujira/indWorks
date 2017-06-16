#ifndef C2ROOM3_H
#define C2ROOM3_H

#include <QDialog>

namespace Ui {
class c2room3;
}

class c2room3 : public QDialog
{
    Q_OBJECT

public:
    explicit c2room3(QWidget *parent = 0);
    ~c2room3();

private:
    Ui::c2room3 *ui;
};

#endif // C2ROOM3_H
