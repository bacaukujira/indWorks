#ifndef LIVINGROOM4_H
#define LIVINGROOM4_H

#include <QDialog>

namespace Ui {
class livingroom4;
}

class livingroom4 : public QDialog
{
    Q_OBJECT

public:
    explicit livingroom4(QWidget *parent = 0);
    ~livingroom4();

private:
    Ui::livingroom4 *ui;
};

#endif // LIVINGROOM4_H
