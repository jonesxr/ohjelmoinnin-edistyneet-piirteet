#include "Henkilo.h"
#include <iostream>

using namespace std;

int main() {

    //käytetään  1 viikkotehtävän tehtävän 1 koodia

    setlocale(LC_ALL, "fi-FI");

    // Henkilo olio 1 
    Henkilo henkilo1;
    henkilo1.setNimi("Kalle");
    henkilo1.setIka(20);

    // Henkilö olio 2 
    Henkilo henkilo2;
    henkilo2.setNimi("Niko");
    henkilo2.setIka(27);

    // Tietojen tulostaminen henkilö1
    cout << "Henkilö 1 tiedot" << endl;
    henkilo1.tulostaHenkilonTiedot();

    // Tietojen tulostaminen henkilö2
    cout << "Henkilö 2 tiedot" << endl << endl;
    henkilo2.tulostaHenkilonTiedot();

    return 0;
}
