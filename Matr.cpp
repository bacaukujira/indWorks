#include <iostream>
#include <fstream>
#include "Matr.hpp"

using namespace std;

Matr::Matr(int b)
{
    a = b;
    matr = new int*[a];
    for(int i=0; i<a; i++) {
	matr[i] = new int[a];
    }
    for(int i=0; i<a; i++)
	for(int j=0; j<a; j++)
	    matr[i][j] = 0;
}

Matr Matr::operator+(Matr my)
{
    for(int i=0; i<a; i++) {
	for(int j=0; j<a; j++) {
	    matr[i][j] += my.matr[i][j];
	}
    }
    return *this;
}

Matr Matr::operator-(Matr my)
{
    for(int i=0; i<a; i++) {
	for(int j=0; j<a; j++) {
	    matr[i][j] -= my.matr[i][j];
	}
    }
    return *this;
}

Matr Matr::operator*(Matr my)
{
    int **mtr;
    mtr = new int*[a];
    for(int i=0; i<a; i++)
	mtr[i] = new int[a];
    for(int i=0; i<a; i++) {
	for(int j=0; j<a; j++) {
 	    mtr[i][j]=0;
	}
    }
    for (int i=0; i < a; i++)
	for (int j=0; j < a; j++)
	    for (int k=0;k < a; k++)
		mtr[i][j]+=matr[i][k]*my.matr[k][j];
    for(int i=0; i<a; i++) {
	for(int j=0; j<a; j++) {
 	    matr[i][j]=mtr[i][j];
	}
    }
    
    return *this;
}

Matr Matr::operator=(Matr my)
{
       for(int i=0; i<a; i++) {	   
	   for(int j=0; j<a; j++) {
	       matr[i][j]=my.matr[i][j];
	   }
       }
       return *this;
}

ostream& operator<<(ostream &out, Matr &m)
{
    for(int i=0; i<m.a; i++) {
	for(int j=0; j<m.a; j++) {
	    out << m.matr[i][j] << " ";
	}
	out << endl;
    }
    return out;
}

istream& operator>>(istream &in, Matr &m)
{
    for(int i=0; i<m.a; i++) {
	for(int j=0; j<m.a; j++) {
	    cout << "["<< i << "]" << "[" << j<< "] = ";
	    in >> m.matr[i][j];
	    cout << endl;
	}
    }
    return in;
}

