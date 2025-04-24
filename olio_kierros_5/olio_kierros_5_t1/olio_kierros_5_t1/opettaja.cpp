#include "Opettaja.h"
#include <iostream>

using namespace std; 

// oletusrakentaja
Opettaja::Opettaja() : Henkilo(), koulutussala("") {
    cout << "Opettajan oletusrakentaja" << endl << endl;
}

// parametrillinen rakentaja
Opettaja::Opettaja(string n, int i, string ks, vector<string> k)
    : Henkilo(n, i), koulutussala(ks), kurssit(k) {
    cout << "Opettajan parametrillinen rakentaja" << endl << endl;
}

// kopiorakentaja
Opettaja::Opettaja(const Opettaja& o) : Henkilo(o), koulutussala(o.koulutussala), kurssit(o.kurssit) {
    cout << "Opettajan kopiorakentaja" << endl << endl;
}

// purkaja
Opettaja::~Opettaja() {
    cout << "Opettajan purkaja" << endl << endl;
}

// getterit
string Opettaja::getKoulutussala() const { return koulutussala; }

// setterit
void Opettaja::setKoulutussala(string ks) { koulutussala = ks; }

// tulostukset
void Opettaja::tulostaTiedot() const {
    cout << "Opettaja - ";
    Henkilo::tulostaTiedot();
    cout << "Koulutussala: " << koulutussala << ", Vastuukurssit: ";
    for (const auto& kurssi : kurssit) {
        cout << kurssi << " ";
    }
    cout << endl;
}

// poistaa kurssin
void Opettaja::poistaKurssi(string kurssiNimi) {
    for (auto it = kurssit.begin(); it != kurssit.end(); ++it) {
        if (*it == kurssiNimi) {
            kurssit.erase(it);
            return;
        }
    }
}

// lisää kurssin
void Opettaja::lisaaKurssi(string kurssi) {
    kurssit.push_back(kurssi);
}