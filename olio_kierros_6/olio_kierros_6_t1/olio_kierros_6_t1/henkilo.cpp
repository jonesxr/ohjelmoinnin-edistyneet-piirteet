#include "Henkilo.h"
#include <iostream>

using namespace std;

Henkilo::Henkilo() : ika(0), nimi("") {
    cout << "henkilön oletusrakentaja" << endl;
}

Henkilo::Henkilo(string n, int i) : nimi(n), ika(i) {
    cout << "henkilön parametrillinen rakentaja" << endl;
}

Henkilo::Henkilo(const Henkilo& h) : nimi(h.nimi), ika(h.ika) {
    cout << "henkilön kopiorakentaja" << endl;
}

Henkilo::~Henkilo() {
    cout << "henkilön purkaja" << endl;
}

string Henkilo::getNimi() const { return nimi; }
int Henkilo::getIka() const { return ika; }

void Henkilo::setNimi(string n) { nimi = n; }
void Henkilo::setIka(int i) { ika = i; }

void Henkilo::tulostaTiedot() const {
    cout << "nimi: " << nimi << ", ikä: " << ika << endl;
}