#include "Koulu.h"
#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "fi-FI");

    string nimi;
    cout << "Anna koulun nimi: ";
    getline(cin, nimi);
    Koulu koulu(nimi);

    while (true) {
        cout << "1. Lisaa opettaja" << endl;

        cout << "2. Lisaa opettajalle kurssi" << endl;

        cout << "3. Lisaa opiskelija" << endl;

        cout << "4. Lisaa opiskelijalle kurssi" << endl;

        cout << "5. Tulosta opettajat" << endl;

        cout << "6. Tulosta opiskelijat" << endl;

        cout << "7. Tulosta koulun tiedot" << endl;

        cout << "8. Lopeta" << endl;

        cout << "Valitse: ";

        int valinta;

        cin >> valinta;

        cin.ignore();

        if (valinta == 8) break;

        switch (valinta) {

        case 1: koulu.lisaaOpettaja(); break;

        case 2: koulu.lisaaOpettajalleKurssi(); break;

        case 3: koulu.lisaaOpiskelija(); break;

        case 4: koulu.lisaaOpiskelijalleKurssi(); break;

        case 5: koulu.tulostaOpettajat(); break;

        case 6: koulu.tulostaOpiskelijat(); break;

        case 7: koulu.tulostaKaikkiTiedot(); break;

        default: cout << "Virheellinen valinta." << endl;
        }

    }

    return 0;
}