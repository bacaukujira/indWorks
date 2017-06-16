#ifndef LIVINGROOM1_H
#define LIVINGROOM1_H

#include <QDialog>

namespace Ui {
class livingroom1;
}

class livingroom1 : public QDialog
{
    Q_OBJECT

public:
    explicit livingroom1(QWidget *parent = 0);
    ~livingroom1();

private:
    Ui::livingroom1 *ui;
};

#endif // LIVINGROOM1_H
