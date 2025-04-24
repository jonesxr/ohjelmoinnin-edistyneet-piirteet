#include "Opettaja.h"
#include <iostream>

using namespace std;

// oletusrakentaja
Opettaja::Opettaja() : Henkilo(), kl("") {
    cout << "opettajan oletusrakentaja" << endl;
}

// parametrillinen rakentaja
Opettaja::Opettaja(string n, int i, string ks, vector<string> k)
    : Henkilo(n, i), kl(ks), kurssit(k) {
    cout << "opettajan parametrillinen rakentaja" << endl;
}

// kopiorakentaja
Opettaja::Opettaja(const Opettaja& o) : Henkilo(o), kl(o.kl), kurssit(o.kurssit) {
    cout << "opettajan kopiorakentaja" << endl;
}

// purkaja
Opettaja::~Opettaja() {
    cout << "opettajan purkaja" << endl;
}

// getterit
string Opettaja::getKoulutussala() const { return kl; }

// setterit
void Opettaja::setKoulutussala(string ks) { kl = ks; }

// tulostukset
void Opettaja::tulostaTiedot() const {
    cout << "opettaja - ";
    Henkilo::tulostaTiedot();
    cout << "koulutussala: " << kl << ", vastuukurssit: ";
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


