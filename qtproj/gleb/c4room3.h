#ifndef C4ROOM3_H
#define C4ROOM3_H

#include <QDialog>

namespace Ui {
class c4room3;
}

class c4room3 : public QDialog
{
    Q_OBJECT

public:
    explicit c4room3(QWidget *parent = 0);
    ~c4room3();

private:
    Ui::c4room3 *ui;
};

#endif // C4ROOM3_H
