#include "Paivays.h"
#include "kalenteri.h"
#include <iostream>

using namespace std;

int main() {

    setlocale(LC_ALL, "fi-FI");



    //oletusrakentajalla tehty 
    Kalenterimerkinta merkinta1;
    cout << "Oletusrakentajalla luotu merkint�:" << endl;
    merkinta1.tulostaMerkinta();
    cout << endl;



    // parametrinen
    Paivays pvm;
    pvm.setPaiva(27);
    pvm.setKuukausi(3);
    pvm.setVuosi(2025);

    // parametrisen tulotukset

    Kalenterimerkinta merkinta2(pvm, "L��k�riaika", true);
    cout << "Parametrillisella rakentajalla luotu merkint�:" << endl;
    merkinta2.tulostaMerkinta();
    cout << endl;



    // kysyminen k�ytt�j�lt�

    Kalenterimerkinta merkinta3;
    cout << "Sy�t� uuden merkinn�n tiedot:" << endl;
    merkinta3.kysyTiedot();
    
    cout << "Sy�tt�m�si merkint�:" << endl << endl;
    merkinta3.tulostaMerkinta();

    return 0;
}