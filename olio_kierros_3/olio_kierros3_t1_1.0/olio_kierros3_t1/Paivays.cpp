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

int Paivays::getPaiva() const {  // const lis�tty
    return paiva;
}

void Paivays::setKuukausi(int p) {
    kuukausi = p;
}

int Paivays::getKuukausi() const {  // const lis�ys
    return kuukausi;
}

void Paivays::setVuosi(int v) {
    vuosi = v;
}

int Paivays::getVuosi() const {  // const lis�ys
    return vuosi;
}

void Paivays::tulostaPaivays() const {  // const lis�ys
    cout << "p�iv�m��r� :" << paiva << "." << kuukausi << "." << vuosi << endl;
}