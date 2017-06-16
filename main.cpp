#include <iostream>
#include "Matr.hpp"
#include <cstdlib>

using namespace std;

int main()
{
    int a;
    cout<<endl<<"Введите размерность массивов: ";
    cin>>a;
    Matr mat1(a);
    cout<<endl<<"Инициализация 1 массива:"<<endl<<endl;
    cin>>mat1;
    Matr mat2(a);
    cout<<endl<<"Инициализация 2 массива:"<<endl<<endl;
    cin>>mat2;
    Matr mat(a);
    mat = (mat1 + mat2);
    cout<<endl<<"Результат сложения: "<<endl<<endl;
    cout<<mat;
    mat = (mat1 - mat2);
    cout<<endl<<"Результат вычитания: "<<endl<<endl;
    cout<<mat;
    mat = (mat1 * mat2);
    cout<<endl<<"Результат умножения: "<<endl<<endl;
    cout<<mat;
}
