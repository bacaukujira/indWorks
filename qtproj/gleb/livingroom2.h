#ifndef LIVINGROOM2_H
#define LIVINGROOM2_H

#include <QDialog>

namespace Ui {
class livingroom2;
}

class livingroom2 : public QDialog
{
    Q_OBJECT

public:
    explicit livingroom2(QWidget *parent = 0);
    ~livingroom2();

private:
    Ui::livingroom2 *ui;
};

#endif // LIVINGROOM2_H
