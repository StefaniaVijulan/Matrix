#include <iostream>
#include "Array.h"
#include "Matrice.h"
#include "Matrice_oarecare.h"
#include "Matrice_patratica.h"
using namespace std;

int main()
{
/*int lin, col, a[101][101];
    cout << "Numarul de linii: ";
        cin >> lin;
        cout << "Numarul de coloane: ";
        cin >> col;
        for (int i = 0; i < lin; i++)
        {
            cout << "Linia " << i + 1 << " este: ";
            for (int j = 0; j < col; j++)
                cin >> a[i][j];
        }
    Matrice_oarecare s(lin,a,col);
     cout << s;
     */

    /*Matrice_oarecare t;
     try {
         cin >> t;
     }
     catch (...)
         {
             cout << "Valorile introduse sunt negative. Incercati sa introduceti alte valori"<<endl;
             cin >> t;
         }
     cout << t;
     */

    /*
    int col, b[101][101];
    cout << "Numar de linii si coloane: ";
        cin >> col;
    for (int i = 0; i < col; i++)
    {
        cout << "Linia " << i + 1 << " este: ";
         for (int j = 0; j < col; j++)
            cin >> b[i][j];
        }
    Matrice_patratica ed(b, col);
    cout << ed;
    cout << endl;
    ed.verificiare();
    cout << endl;
    */

    
    Matrice_patratica a;
    try {
         cin >> a;
     }
     catch (...)
         {
             cout << "Valorile introduse sunt negative. Incercati sa introduceti alte valori"<<endl;
             cin >> a;
         }
    cout << a;
    cout << endl;
    a.verificiare();
    
}

