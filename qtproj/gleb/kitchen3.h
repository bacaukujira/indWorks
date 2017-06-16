#ifndef KITCHEN3_H
#define KITCHEN3_H

#include <QDialog>

namespace Ui {
class Kitchen3;
}

class Kitchen3 : public QDialog
{
    Q_OBJECT

public:
    explicit Kitchen3(QWidget *parent = 0);
    ~Kitchen3();

private:
    Ui::Kitchen3 *ui;
};

#endif // KITCHEN3_H
