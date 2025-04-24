#include "Henkilo.h"
#include <iostream>

using namespace std;

int main() {

    //k�ytet��n  3 viikkoteht�v�n teht�v�n 1 koodia henkilo luokka 

    setlocale(LC_ALL, "fi-FI");

    // Henkilo olio 1 
    Henkilo henkilo1;
    henkilo1.setNimi("Kalle");
    henkilo1.setIka(20);

    //henkilon olion 1 osoite1 olio
    Osoite osoite1; 
    osoite1.setKatuosoite("Jokutie 200"); 
    osoite1.setPostinumero("00001");
    osoite1.setKaupunki("Rovaniemi"); 

    henkilo1.setOsoite(osoite1); 

    // Henkil� olio 2 
    Henkilo henkilo2;
    henkilo2.setNimi("Niko");
    henkilo2.setIka(27);
    
    //henkilon olion 2 osoite2 olio
    Osoite osoite2; 
    osoite2.setKatuosoite("Jokutie 13 B"); 
    osoite2.setPostinumero("33600");
    osoite2.setKaupunki("Lemp��l�");

    henkilo2.setOsoite(osoite2); 

    
    // Tietojen tulostaminen henkil�1
    cout << "Henkil� 1 tiedot" << endl << endl;

    //tulostaa my�s osoitteen nyt 
    henkilo1.tulostaHenkilonTiedot();

    
    // Tietojen tulostaminen henkil�2
    cout << "Henkil� 2 tiedot" << endl << endl;

    //tulostaa my�s osoitteen nyt
    henkilo2.tulostaHenkilonTiedot();

    return 0;
}