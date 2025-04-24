#include "Henkilo.h"
#include <iostream>

using namespace std;

// Muuttujien alustaminen konstruktorissa
Henkilo::Henkilo() {
    nimi = "";
    ika = 0;
}

// Iän asettaminen parametrinä
void Henkilo::setIka(int i) {
    ika = i;
}

// Palautetaan ikä
int Henkilo::getIka() const {  // const lisätty
    return ika;
}

// Asetetaan nimi
void Henkilo::setNimi(string x) {
    nimi = x;
}

// Palautetaan nimi
string Henkilo::getNimi() const {  // const lisätty
    return nimi;
}

// Tulostukset
void Henkilo::tulostaHenkilonTiedot() const {  // const lisätty
    cout << "Nimi : " << nimi << endl;
    cout << endl;
    cout << "Ikä  : " << ika << endl;
    cout << endl;
    cout << endl;
}
