#pragma once
#include"Matrice.h"
#include "Array.h"
#include<iostream>
using namespace std;
class Matrice_oarecare:public Matrice
{private:
    int lin;
public:
    Matrice_oarecare();
    Matrice_oarecare(int m_lin, int a[][101], int n);
    Matrice_oarecare(const Matrice_oarecare& ob);
    ~Matrice_oarecare();

    void afisare(ostream& out);
    void citire(istream& in);

    
};

