#include "Henkilo.h"
#include "Opiskelija.h"
#include "Opettaja.h"
#include <vector>
#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "fi-FI");

    vector<Henkilo*> henkilot;

    henkilot.push_back(new Henkilo("Henkilo1", 30));

    henkilot.push_back(new Opiskelija("Opiskelija1", 20, "´FFFFFFFFFFFF111123", 200));


    henkilot.push_back(new Opettaja("Opettaja1", 45, "fysiikka"));

    for (const Henkilo* henkilo : henkilot) {
        henkilo->tulostaTiedot();
    }

    for (Henkilo* henkilo : henkilot) {
        delete henkilo;
    }

    return 0;
}