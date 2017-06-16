#ifndef KITCHEN2_H
#define KITCHEN2_H

#include <QDialog>

namespace Ui {
class Kitchen2;
}

class Kitchen2 : public QDialog
{
    Q_OBJECT

public:
    explicit Kitchen2(QWidget *parent = 0);
    ~Kitchen2();

private:
    Ui::Kitchen2 *ui;
};

#endif // KITCHEN2_H
