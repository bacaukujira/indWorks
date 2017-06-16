#ifndef RESTROOM2_H
#define RESTROOM2_H

#include <QDialog>

namespace Ui {
class restroom2;
}

class restroom2 : public QDialog
{
    Q_OBJECT

public:
    explicit restroom2(QWidget *parent = 0);
    ~restroom2();

private:
    Ui::restroom2 *ui;
};

#endif // RESTROOM2_H
