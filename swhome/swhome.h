#ifndef SWHOME_H
#define SWHOME_H

#include <QMainWindow>

namespace Ui {
class swhome;
}

class swhome : public QMainWindow
{
    Q_OBJECT

public:
    explicit swhome(QWidget *parent = 0);
    ~swhome();

private:
    Ui::swhome *ui;
};

#endif // SWHOME_H
