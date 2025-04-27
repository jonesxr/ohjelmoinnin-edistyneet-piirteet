#include "Henkilo.h"
#include <iostream>

using namespace std;

Henkilo::Henkilo() : ika(0), nimi("") {
    cout << "henkil�n oletusrakentaja" << endl;
}

Henkilo::Henkilo(string n, int i) : nimi(n), ika(i) {
    cout << "henkil�n parametrillinen rakentaja" << endl;
}

Henkilo::Henkilo(const Henkilo& h) : nimi(h.nimi), ika(h.ika) {
    cout << "henkil�n kopiorakentaja" << endl;
}

Henkilo::~Henkilo() {
    cout << "henkil�n purkaja" << endl;
}

string Henkilo::getNimi() const { return nimi; }
int Henkilo::getIka() const { return ika; }

void Henkilo::setNimi(string n) { nimi = n; }
void Henkilo::setIka(int i) { ika = i; }

void Henkilo::tulostaTiedot() const {
    cout << "nimi: " << nimi << ", ik�: " << ika << endl;
}