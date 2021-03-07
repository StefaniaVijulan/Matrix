#pragma once
#include"Matrice.h"
#include "Array.h"
#include<iostream>
using namespace std;
class Matrice_patratica :public Matrice
{
private:
    int dim;
public:
    Matrice_patratica();
    Matrice_patratica( int m[][101], int n);
    Matrice_patratica(const Matrice_patratica& ob);
    ~Matrice_patratica();
    void verificiare();
    void afisare(ostream& out);
    void citire(istream& in);
    //friend int determinant()
   
};

