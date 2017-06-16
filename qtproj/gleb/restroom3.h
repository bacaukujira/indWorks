#ifndef RESTROOM3_H
#define RESTROOM3_H

#include <QDialog>

namespace Ui {
class restroom3;
}

class restroom3 : public QDialog
{
    Q_OBJECT

public:
    explicit restroom3(QWidget *parent = 0);
    ~restroom3();

private:
    Ui::restroom3 *ui;
};

#endif // RESTROOM3_H
