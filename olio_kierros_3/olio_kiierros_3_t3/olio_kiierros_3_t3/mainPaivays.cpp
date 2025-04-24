#include "Paivays.h"
#include "kalenteri.h"
#include <iostream>

using namespace std;

int main() {

    setlocale(LC_ALL, "fi-FI");



    //oletusrakentajalla tehty 
    Kalenterimerkinta merkinta1;
    cout << "Oletusrakentajalla luotu merkintä:" << endl;
    merkinta1.tulostaMerkinta();
    cout << endl;



    // parametrinen
    Paivays pvm;
    pvm.setPaiva(27);
    pvm.setKuukausi(3);
    pvm.setVuosi(2025);

    // parametrisen tulotukset

    Kalenterimerkinta merkinta2(pvm, "Lääkäriaika", true);
    cout << "Parametrillisella rakentajalla luotu merkintä:" << endl;
    merkinta2.tulostaMerkinta();
    cout << endl;



    // kysyminen käyttäjältä

    Kalenterimerkinta merkinta3;
    cout << "Syötä uuden merkinnän tiedot:" << endl;
    merkinta3.kysyTiedot();
    
    cout << "Syöttämäsi merkintä:" << endl << endl;
    merkinta3.tulostaMerkinta();

    return 0;
}