#ifndef RESTROOM1_H
#define RESTROOM1_H

#include <QDialog>

namespace Ui {
class restroom1;
}

class restroom1 : public QDialog
{
    Q_OBJECT

public:
    explicit restroom1(QWidget *parent = 0);
    ~restroom1();

private:
    Ui::restroom1 *ui;
};

#endif // RESTROOM1_H
