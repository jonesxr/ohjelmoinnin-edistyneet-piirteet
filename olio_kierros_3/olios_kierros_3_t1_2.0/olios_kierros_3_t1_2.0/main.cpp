#include "Henkilo.h"
#include <iostream>

using namespace std;

int main() {

    //k�ytet��n  1 viikkoteht�v�n teht�v�n 1 koodia

    setlocale(LC_ALL, "fi-FI");

    // Henkilo olio 1 
    Henkilo henkilo1;
    henkilo1.setNimi("Kalle");
    henkilo1.setIka(20);

    // Henkil� olio 2 
    Henkilo henkilo2;
    henkilo2.setNimi("Niko");
    henkilo2.setIka(27);

    // Tietojen tulostaminen henkil�1
    cout << "Henkil� 1 tiedot" << endl;
    henkilo1.tulostaHenkilonTiedot();

    // Tietojen tulostaminen henkil�2
    cout << "Henkil� 2 tiedot" << endl << endl;
    henkilo2.tulostaHenkilonTiedot();

    return 0;
}
