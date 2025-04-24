#include "Henkilo.h"
#include <iostream>

using namespace std;

// asetetaan tiedot 
Henkilo::Henkilo(string n, int i, string o) {
    nimi = n;
    ika = i;
    osoite = o;

    cout << endl;
    cout << "Henkilo luokan rakentaja";
    cout << endl;

}

// tulostus
void Henkilo::tulosta() const {
    cout << endl;
    cout << "nimi: " << nimi;
    cout << ", ikä: " << ika;
    cout << ", osoite: " << osoite << endl;
    cout << endl;

}

//purkaja
Henkilo::~Henkilo(){
    cout << endl;
    cout << "purkaja aktivoitu";
    cout << endl;
}

//kopiorakentaja
Henkilo::Henkilo(const Henkilo& kopio) {
    nimi = kopio.nimi;
    ika = kopio.ika;
    osoite = kopio.osoite;

    cout << endl;
    cout << "Henkilo luokan kopiorakentaja";
    cout << endl;
}

