#ifndef C3ROOM3_H
#define C3ROOM3_H

#include <QDialog>

namespace Ui {
class c3room3;
}

class c3room3 : public QDialog
{
    Q_OBJECT

public:
    explicit c3room3(QWidget *parent = 0);
    ~c3room3();

private:
    Ui::c3room3 *ui;
};

#endif // C3ROOM3_H
