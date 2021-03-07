#pragma once
#include<iostream>
#include "Matrice_oarecare.h"
#include "Array.h"
using namespace std;
Matrice_oarecare::Matrice_oarecare()
{
    lin = 0;
  //  cout << "Matrice oarecare const fara par" << endl;
}
Matrice_oarecare::Matrice_oarecare(int m_lin, int a[][101], int n) :Matrice(m_lin, a, n)
{
    lin = m_lin;
   // cout << "Constructor matrice oarecare parametrii" << endl;
}
Matrice_oarecare::Matrice_oarecare(const Matrice_oarecare& ob)
{
    //cout << "matrice oarecare c.c" << endl;
    lin = ob.lin;
    v = new Array[ob.lin];
    for (int i = 0; i < ob.lin; i++)
        v[i] = ob.v[i];
}

Matrice_oarecare::~Matrice_oarecare()
{
    //cout << "destrcutor matrice oarecare" << endl;
}
void Matrice_oarecare::citire(istream& in)
{
    int a[101], c;
    cout << "Numarul de linii: ";
    in >> lin;//nr linii
    v = new Array[lin];
    cout << "Numarul de coloane: ";
    in >> c;//nr coloane
     if (lin <= 0 || c <= 0)
            throw 0;

    for (int j = 0; j < lin; j++)
    {
        cout << "Vectorul " << j +1 << " il citim acum : ";
        for (int i = 0; i < c; i++)
        {
            in >> a[i];
            v[j].setvec(c, a);
        }
    }
}
void Matrice_oarecare::afisare(ostream& out)
{
    for (int i = 0; i < lin; i++)
    {
        int val = v[i].getnrel();
        for (int j = 0; j < val; j++)
            out << v[i].getvec(j) << " ";
        cout << endl;
    }

}
