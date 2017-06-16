#pragma once

#include <fstream>

class Matr {
private:
    int a;
    int **matr;
public:
    Matr operator+(Matr my);
    Matr operator-(Matr my);
    Matr operator*(Matr my);
    Matr operator=(Matr my);
    Matr(int _a);
    
    friend std::istream & operator>>(std::istream &in, Matr &matr);
    friend std::ostream & operator<<(std::ostream &out, Matr &matr);

};
