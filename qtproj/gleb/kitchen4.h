#ifndef KITCHEN4_H
#define KITCHEN4_H

#include <QDialog>

namespace Ui {
class Kitchen4;
}

class Kitchen4 : public QDialog
{
    Q_OBJECT

public:
    explicit Kitchen4(QWidget *parent = 0);
    ~Kitchen4();

private:
    Ui::Kitchen4 *ui;
};

#endif // KITCHEN4_H
