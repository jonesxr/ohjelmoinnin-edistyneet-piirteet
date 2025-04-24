#include "Noppa.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <locale.h>

using namespace std;

int main() {
    setlocale(LC_ALL, "fi-FI");
    srand(time(NULL)); 

    //testi 1 noppa
    cout << "testi 1 noppa" << endl;
    //olion luonti 1 noppa
    Noppa yksi_noppa;
    //heitto
    yksi_noppa.heitaNoppaa();
    //tulos
    yksi_noppa.kerroViimeisenHeitonLukema();
    cout << "viimeisen heiton summa : " << yksi_noppa.getViimeisinLukema() << " ,heitetty nopalla " << yksi_noppa.getNoppienLkm();
    cout << endl << endl;


    // testi 2 noppa
    cout << "testi 2 noppaa : " << endl;
    //parametrillinen testiin
    Noppa kaksi_noppaa(2);
    kaksi_noppaa.heitaNoppaa();
    kaksi_noppaa.kerroViimeisenHeitonLukema();
    cout << "viimeisen heiton summa : " << kaksi_noppaa.getViimeisinLukema() << " ,heitetty nopalla " << kaksi_noppaa.getNoppienLkm();
    cout << endl << endl;

    // testi 5 noppaaa
    cout << "testi 5 noppaa : " << endl;
    Noppa viisi_noppaa(5);
    viisi_noppaa.heitaNoppaa();
    viisi_noppaa.kerroViimeisenHeitonLukema();
    cout << "viimeisen heiton summa : " << viisi_noppaa.getViimeisinLukema() << " ,heitetty nopalla " << viisi_noppaa.getNoppienLkm();
    cout << endl << endl;

 

    return 0;
}