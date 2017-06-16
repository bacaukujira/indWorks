#ifndef RESTROOM4_H
#define RESTROOM4_H

#include <QDialog>

namespace Ui {
class restroom4;
}

class restroom4 : public QDialog
{
    Q_OBJECT

public:
    explicit restroom4(QWidget *parent = 0);
    ~restroom4();

private:
    Ui::restroom4 *ui;
};

#endif // RESTROOM4_H
