#include "Opiskelija.h"
#include <iostream>
using namespace std;
// oletusrakentaja
Opiskelija::Opiskelija() : Henkilo(), opNro(""), opintopisteet(0) {
    cout << "Opiskelijan oletusrakentaja" << endl << endl;
}


// parametrillinen rakentaja
Opiskelija::Opiskelija(string n, int i, string on, int op)
    : Henkilo(n, i), opNro(on), opintopisteet(op) {
    cout << "Opiskelijan parametrillinen rakentaja" << endl << endl;
}


// kopiorakentaja
Opiskelija::Opiskelija(const Opiskelija& o)
    : Henkilo(o), opNro(o.opNro), kurssit(o.kurssit), opintopisteet(o.opintopisteet) {
    cout << "Opiskelijan kopiorakentaja" << endl << endl;
}


// purkaja
Opiskelija::~Opiskelija() {
    cout << "Opiskelijan purkaja" << endl << endl;
}


// getterit
string Opiskelija::getOpNro() const { return opNro; }
int Opiskelija::getOpintopisteet() const { return opintopisteet; }
// setterit
void Opiskelija::setOpNro(string on) { opNro = on; }
// lisää kurssin
void Opiskelija::lisaaKurssi(string kurssi) {

    kurssit.push_back(kurssi);

}

// tulostukset
void Opiskelija::tulostaTiedot() const {
    cout << "Opiskelija - ";
    Henkilo::tulostaTiedot();
    cout << "Opiskelijanumero: " << opNro << ", Opintopisteet: " << opintopisteet
        << ", Suoritetut kurssit: ";
    for (const auto& kurssi : kurssit) {
        cout << kurssi << " ";
    }
    cout << endl;
}


// lisää pisteitä
void Opiskelija::lisaaOpintopisteita(int pisteet) {
    opintopisteet += pisteet;
}