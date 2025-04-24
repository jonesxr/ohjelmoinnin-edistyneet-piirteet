#include "Henkilo.h"
#include <iostream>

using namespace std;

// oletusrakentaja
Henkilo::Henkilo() : ika(0), nimi("") {
    cout << "henkil�n oletusrakentaja" << endl;
}

// parametrillinen rakentaja
Henkilo::Henkilo(string n, int i) : nimi(n), ika(i) {
    cout << "henkil�n parametrillinen rakentaja" << endl;
}

// kopiorakentaja
Henkilo::Henkilo(const Henkilo& h) : nimi(h.nimi), ika(h.ika) {
    cout << "henkil�n kopiorakentaja" << endl;
}

// purkaja
Henkilo::~Henkilo() {
    cout << "henkil�n purkaja" << endl;
}

// getterit
string Henkilo::getNimi() const { return nimi; }
int Henkilo::getIka() const { return ika; }

// setterit
void Henkilo::setNimi(string n) { nimi = n; }
void Henkilo::setIka(int i) { ika = i; }

// tulostukset
void Henkilo::tulostaTiedot() const {
    cout << "nimi: " << nimi << ", ik�: " << ika << endl;
}