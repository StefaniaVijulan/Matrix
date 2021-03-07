#pragma once
#include<iostream>
#include "Array.h"
using namespace std;
class Matrice
{
private:
    int row;
protected:
    Array* v;
public:
    Matrice();
    Matrice(int m_row, int a[][101], int n); //constructor cu parametrii
    Matrice(const Matrice& ob);//c.c.
    virtual ~Matrice(); // destructor
    Matrice& operator = (const Matrice& ob);

    virtual void citire(istream& in) = 0; //pur virtuala
    virtual void afisare(ostream& out) = 0;  //pur virtuala

    friend istream& operator>>(istream&, Matrice&);
    friend ostream& operator <<(ostream&, Matrice&);
};

