#include "Array.h"
#include<iostream>
using namespace std;
Array::Array()
{
    dim = 0;
    a = new int[0];
   // cout << "constructor fara parametrii";
    //cout << endl;
}
Array::Array(int m, int vec[])
{
    setvec(m, vec);
   // cout << "constructor cu parametrii";
   // cout << endl;
}
Array::Array(const Array& ob)
{
    dim = ob.dim;
    a = new int[dim];
    for (int i = 0; i < dim; i++)
        a[i] = ob.a[i];
  //  cout << "copy constractor";
   // cout << endl;
}
Array::~Array()
{
    dim = 0;
    delete[]a;
   // cout << "destructor vector";
   // cout << endl;
}
Array& Array:: operator =(const Array& c)
{
    if (this == &c)
        return *this;
    else
    {
        dim = c.dim;
        a = new int[dim];
        for (int i = 0; i < dim; i++)
            a[i] = c.a[i];
        return *this;
    }
}
//void Array::afisare()
//{
//    for (int i = 0; i < dim; i++)
//        cout << a[i] << " ";
//}
void Array::setvec(int m, int vec[])
{
    dim = m;
    a = new int[dim];
    for (int i = 0; i < dim; i++)
        a[i] = vec[i];

}
int Array::getnrel()
{
    return dim;
}
int Array::getvec(int i)
{
    return a[i];

}
ostream& operator<<(ostream& out, Array& ob)
{
    for (int i = 0; i < ob.dim; i++)
        out << ob.a[i] << " ";
    return out;
}
istream& operator>>(istream& in, Array& ob)
{
    in >> ob.dim;
    for (int i = 0; i < ob.dim; i++)
        in >> ob.a[i];
    return in;
}
