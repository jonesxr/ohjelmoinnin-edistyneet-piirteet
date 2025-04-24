#include "Henkilo.h"
#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "fi-FI");

    
    //henkilo olio 1 
    Henkilo henkilo1;
    //tietojen asettaminen olioon
    henkilo1.setNimi("Kalle");   
    henkilo1.setIka(20);       

    //henkilö olio 2 
    Henkilo henkilo2;
    //tietojen asettaminen olioon
    henkilo2.setNimi("Niko");  
    henkilo2.setIka(27);

    //tässä hyvä kertoa kenen tiedot tulostetaan ettei mene ns "pötköön"
    //voisi olla muukin kuin henkilö x tyylisesti

    //tietojen tulostaminen henkilö1
    cout << "Henkilö 1 tiedot" << endl;
    henkilo1.tulostaHenkilonTiedot();

    //tietojen tulostaminen henkilö2
    cout << "Henkilö 2 tiedot" << endl << endl;
    henkilo2.tulostaHenkilonTiedot();


    return 0;    
}