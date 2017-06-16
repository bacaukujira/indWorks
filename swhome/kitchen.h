#ifndef KITCHEN_H
#define KITCHEN_H

#include <QDialog>

namespace Ui {
class kitchen;
}

class kitchen : public QDialog
{
    Q_OBJECT

public:
    explicit kitchen(QWidget *parent = 0);
    ~kitchen();

private:
    Ui::kitchen *ui;
};

#endif // KITCHEN_H
