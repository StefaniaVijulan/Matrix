#pragma once
#include "Matrice_patratica.h"
#include "Array.h"

using namespace std;
Matrice_patratica::Matrice_patratica()
{
    dim = 0;
    //cout << "Matrice patratica const fara par" << endl;
}
Matrice_patratica::Matrice_patratica( int m[][101], int n) :Matrice (n, m, n)

{
    dim = n;

    //cout << "Constructor matrice patratica parametrii" << endl;
}
Matrice_patratica::Matrice_patratica(const Matrice_patratica& ob)
{
    dim = ob.dim;
   // cout << "matrice patratica c.c" << endl;
    v = new Array[ob.dim];
    for (int i = 0; i < ob.dim; i++)
        v[i] = ob.v[i];
}

Matrice_patratica::~Matrice_patratica()
{
   // cout << "destrcutor matrice patratica" << endl;
}
void Matrice_patratica::citire(istream& in)
{
    int m[101];
    cout << "Numarul de linii si de coloane: ";
    in >> dim; 
    if (dim <= 0)
        throw 0;
    v = new Array[dim];
    for (int j = 0; j < dim; j++)
    {
        cout << "Vectorul " << j + 1 << " il citim acum : ";
        for (int i = 0; i < dim; i++)
        {
            in >> m[i];
            v[j].setvec(dim, m);
        }
    }
}
void Matrice_patratica::afisare(ostream& out)
{
    cout << "Matricea este:" << endl;
    for (int i = 0; i < dim; i++)
    {
        for (int j = 0; j <dim; j++)
            out << v[i].getvec(j) << " ";
        cout << endl;
    }
    if (dim == 1)
        cout << "Determinantul este: " << v[0].getvec(0);
    if (dim == 2)
        cout << "Determinantul este: " << v[0].getvec(0) * v[1].getvec(1) - v[1].getvec(0) * v[0].getvec(1);
    if (dim == 3)
        cout << "Determinantul este: " << v[0].getvec(0) * v[1].getvec(1) * v[2].getvec(2) + v[1].getvec(0) * v[0].getvec(2) * v[2].getvec(1) + v[0].getvec(1) * v[1].getvec(2) * v[2].getvec(0) - v[0].getvec(2) * v[1].getvec(1) * v[2].getvec(0) - v[2].getvec(1) * v[1].getvec(2) * v[0].getvec(0) - v[1].getvec(0) * v[0].getvec(1) * v[2].getvec(2);

}

void Matrice_patratica::verificiare() {
    int tr = 1;
    for (int i = 0; i < dim; i++)
        for (int j = 0; j < dim; j++)
            if (tr != 0)
            {
                if (i < j || i>j)
                    if (v[i].getvec(j) != 0)
                        tr = 0;
                if (i == j)
                    if (v[i].getvec(j) == 0)
                        tr = 0;
            }
            else
                break;
      if (tr == 1)
           cout << "este triungiulara";
        else
                    cout << "Nu este triunghiulara";

}
