#include "Henkilo.h"
#include <iostream>

using namespace std;

// Muuttujien alustaminen konstruktorissa
Henkilo::Henkilo() {
    nimi = "";
    ika = 0;
}

// I�n asettaminen parametrin�
void Henkilo::setIka(int i) {
    ika = i;
}

// Palautetaan ik�
int Henkilo::getIka() const {  // const lis�tty
    return ika;
}

// Asetetaan nimi
void Henkilo::setNimi(string x) {
    nimi = x;
}

// Palautetaan nimi
string Henkilo::getNimi() const {  // const lis�tty
    return nimi;
}

// Tulostukset
void Henkilo::tulostaHenkilonTiedot() const {  // const lis�tty
    cout << "Nimi : " << nimi << endl;
    cout << endl;
    cout << "Ik�  : " << ika << endl;
    cout << endl;
    cout << endl;
}
