
//k‰ytet‰‰n t1 koodia ja tehd‰‰n siihen teht‰v‰nannon muokkaukset !!!!!!

#include "Henkilo.h"
#include <iostream>

using namespace std;

Henkilo::Henkilo() {
    nimi = "";
    ika = 0;
}


//kopiorakentaja 
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


void Henkilo::tulostaHenkilonTiedot() const {

    //tulostukset 
    cout << "Nimi : " << nimi << endl;

    //loopilla saadaan poistetaan koko ik‰ tulostuksesta sen ollessa 0 
    //poistaa kopiorakentajasta i‰n tulostuksen niin ei tarvitse tehd‰ erillist‰ funktiota kopioiden tulostukseen
    if (ika > 0) {
        cout << "Ik‰  : " << ika << endl;
    }

    cout << endl;
}