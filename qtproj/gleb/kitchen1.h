#ifndef KITCHEN1_H
#define KITCHEN1_H

#include <QDialog>

namespace Ui {
class Kitchen1;
}

class Kitchen1 : public QDialog
{
    Q_OBJECT

public:
    explicit Kitchen1(QWidget *parent = 0);
    ~Kitchen1();

private:
    Ui::Kitchen1 *ui;
};

#endif // KITCHEN1_H
