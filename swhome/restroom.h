#ifndef RESTROOM_H
#define RESTROOM_H

#include <QDialog>

namespace Ui {
class restroom;
}

class restroom : public QDialog
{
    Q_OBJECT

public:
    explicit restroom(QWidget *parent = 0);
    ~restroom();

private:
    Ui::restroom *ui;
};

#endif // RESTROOM_H
