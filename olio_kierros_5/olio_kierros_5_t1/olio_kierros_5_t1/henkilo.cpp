#include "Henkilo.h"
#include <iostream>

using namespace std; 

// oletusrakentaja
Henkilo::Henkilo() : ika(0), nimi("") {
    cout << "Henkilön oletusrakentaja" << endl << endl;
}

// parametrillinen rakentaja
Henkilo::Henkilo(string n, int i) : nimi(n), ika(i) {
    cout << "Henkilön parametrillinen rakentaja" << endl << endl;
}

// kopiorakentaja
Henkilo::Henkilo(const Henkilo& h) : nimi(h.nimi), ika(h.ika) {
    cout << "Henkilön kopiorakentaja" << endl << endl;
}

// purkaja
Henkilo::~Henkilo() {
    cout << "Henkilön purkaja" << endl << endl;
}

// getterit
string Henkilo::getNimi() const { return nimi; }
int Henkilo::getIka() const { return ika; }

// setterit
void Henkilo::setNimi(string n) { nimi = n; }
void Henkilo::setIka(int i) { ika = i; }

// tulostukset
void Henkilo::tulostaTiedot() const {
    cout << "Nimi: " << nimi << ", Ikä: " << ika << endl << endl;
}