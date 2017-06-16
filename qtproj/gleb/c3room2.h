#ifndef C3ROOM2_H
#define C3ROOM2_H

#include <QDialog>

namespace Ui {
class c3room2;
}

class c3room2 : public QDialog
{
    Q_OBJECT

public:
    explicit c3room2(QWidget *parent = 0);
    ~c3room2();

private:
    Ui::c3room2 *ui;
};

#endif // C3ROOM2_H
