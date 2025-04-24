#include "Paivays.h"
#include <iostream>

using namespace std;

//ei muutoksia

Paivays::Paivays() {
    paiva = 0;
    kuukausi = 0;
    vuosi = 0;
}

void Paivays::setPaiva(int p) {
    paiva = p;
}

int Paivays::getPaiva() {
    return paiva;
}

void Paivays::setKuukausi(int p) {
    kuukausi = p;
}

int Paivays::getKuukausi() {
    return kuukausi;
}

void Paivays::setVuosi(int v) {
    vuosi = v;
}

int Paivays::getVuosi() {
    return vuosi;
}

void Paivays::tulostaPaivays() {
    cout << "päivämäärä :" << paiva << "." << kuukausi << "." << vuosi << endl;
}