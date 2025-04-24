#include "Paivays.h"
#include <iostream>

using namespace std;

Paivays::Paivays() {
    paiva = 0;
    kuukausi = 0;
    vuosi = 0;
}

void Paivays::setPaiva(int p) {
    paiva = p;
}

int Paivays::getPaiva() const {  // const lisätty
    return paiva;
}

void Paivays::setKuukausi(int p) {
    kuukausi = p;
}

int Paivays::getKuukausi() const {  // const lisäys
    return kuukausi;
}

void Paivays::setVuosi(int v) {
    vuosi = v;
}

int Paivays::getVuosi() const {  // const lisäys
    return vuosi;
}

void Paivays::tulostaPaivays() const {  // const lisäys
    cout << "päivämäärä :" << paiva << "." << kuukausi << "." << vuosi << endl;
}