#include "Henkilo.h"
#include "Opiskelija.h"
#include <iostream>

using namespace std;

int main() {

    setlocale(LC_ALL, "fi-FI");

    Opiskelija opiskelija("Jouni", 21, "CBA321");

    cout << "Ennen muutosta:";

    opiskelija.tulostaTiedot();

    cout << endl;

    opiskelija.muutaTiedot(); // Yritt�� muokata nimi ja ika

    cout << "Muutoksen j�lkeen:";

    opiskelija.tulostaTiedot();
    return 0;
}
