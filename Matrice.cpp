#include "Matrice.h"
Matrice::Matrice()
{
   // cout << "constr Mat fara par" << endl;
    row = 0;
    v = new Array[0];

}
Matrice::Matrice(int m_row, int a[][101], int n) //constructor cu parametrii
{
    //cout << "constr mat cu par" << endl;
    row = m_row;
    v = new Array[row];
    for (int i = 0; i < row; i++)
        v[i].setvec(n, a[i]);
}
Matrice::Matrice(const Matrice& ob)//c.c.
{
   // cout << "mat c.c" << endl;
    row = ob.row;
    this->v = new Array[row];
    for (int i = 0; i < row; i++)
        v[i] = ob.v[i];

}
Matrice::~Matrice() // destructor
{
    row = 0;
    delete[]this->v;
    //cout << "destr mat" << endl;
}

Matrice& Matrice::operator=(const Matrice& ob)
{
    if (this == &ob)
        return *this;
    else
    {
        row = ob.row;
        this->v = new Array[row];
        for (int i = 0; i < row; i++)
            v[i] = ob.v[i];
        return *this;
    }
}
ostream& operator<<(ostream& out, Matrice& ob)
{
    ob.afisare(out);
    return out;
}
istream& operator>>(istream& in, Matrice& ob)
{
    ob.citire(in);
    return in;
}