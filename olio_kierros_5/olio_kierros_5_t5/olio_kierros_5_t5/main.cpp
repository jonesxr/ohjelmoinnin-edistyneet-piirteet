#include "Henkilo.h"
#include "Opettaja.h"
#include "Opiskelija.h"
#include <vector>
#include <iostream>

using namespace std;


int main() {

    // vektori henkilo osoittimille
    vector<Henkilo*> henkilot;

    // lisätään oliot
    henkilot.push_back(new Henkilo("henkilo", 30));
    henkilot.push_back(new Opettaja("opettaja", 40, "ohjelmointi"));
    henkilot.push_back(new Opiskelija("opiskelija", 20, "A123"));

    // tulostetaan tiedot
    for (const auto* henkilo : henkilot) {
        henkilo->tulostaTiedot();
    }

    // vapautetaan muisti
    for (auto* henkilo : henkilot) {
        delete henkilo;
    }

    return 0;
}