#include "Henkilo.h"
#include <iostream>

using namespace std;

// oletusrakentaja
Henkilo::Henkilo() : ika(0), nimi("") {
    cout << "henkilön oletusrakentaja" << endl;
}

// parametrillinen rakentaja
Henkilo::Henkilo(string n, int i) : nimi(n), ika(i) {
    cout << "henkilön parametrillinen rakentaja" << endl;
}

// kopiorakentaja
Henkilo::Henkilo(const Henkilo& h) : nimi(h.nimi), ika(h.ika) {
    cout << "henkilön kopiorakentaja" << endl;
}

// purkaja
Henkilo::~Henkilo() {
    cout << "henkilön purkaja" << endl;
}

// getterit
string Henkilo::getNimi() const { return nimi; }
int Henkilo::getIka() const { return ika; }

// setterit
void Henkilo::setNimi(string n) { nimi = n; }
void Henkilo::setIka(int i) { ika = i; }

// tulostukset
void Henkilo::tulostaTiedot() const {
    cout << "nimi: " << nimi << ", ikä: " << ika << endl;
}