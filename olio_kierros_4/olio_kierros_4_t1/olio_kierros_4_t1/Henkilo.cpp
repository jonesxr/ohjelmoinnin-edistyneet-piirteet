#include "Henkilo.h"
#include <iostream>

using namespace std;

Henkilo::Henkilo() {
    nimi = "";
    ika = 0;
}


// kopiorakentaja 
Henkilo::Henkilo(const Henkilo& kopio) {
    //kopioidaan nimi
    nimi = kopio.nimi; 

    //alustetaan nollaksi jotta ei tule satunnainen muistista tullut luku
    ika = 0;                  
}



void Henkilo::setIka(int i) {
    ika = i;
}

int Henkilo::getIka() {
    return ika;
}

void Henkilo::setNimi(string x) {
    nimi = x;
}

string Henkilo::getNimi() {
    return nimi;
}


void Henkilo::tulostaHenkilonTiedot() {

    //tulostukset 
    cout << "Nimi : " << nimi << endl;

    //loopilla saadaan poistetaan koko ikä tulostuksesta sen ollessa 0 
    //poistaa kopiorakentajasta iän tulostuksen niin ei tarvitse tehdä erillistä funktiota kopioiden tulostukseen
    if (ika > 0) { 
        cout << "Ikä  : " << ika << endl;
    }

    cout << endl;
}