#ifndef LIVINGROOM3_H
#define LIVINGROOM3_H

#include <QDialog>

namespace Ui {
class livingroom3;
}

class livingroom3 : public QDialog
{
    Q_OBJECT

public:
    explicit livingroom3(QWidget *parent = 0);
    ~livingroom3();

private:
    Ui::livingroom3 *ui;
};

#endif // LIVINGROOM3_H
