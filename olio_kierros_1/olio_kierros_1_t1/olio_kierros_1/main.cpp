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

    //henkil� olio 2 
    Henkilo henkilo2;
    //tietojen asettaminen olioon
    henkilo2.setNimi("Niko");  
    henkilo2.setIka(27);

    //t�ss� hyv� kertoa kenen tiedot tulostetaan ettei mene ns "p�tk��n"
    //voisi olla muukin kuin henkil� x tyylisesti

    //tietojen tulostaminen henkil�1
    cout << "Henkil� 1 tiedot" << endl;
    henkilo1.tulostaHenkilonTiedot();

    //tietojen tulostaminen henkil�2
    cout << "Henkil� 2 tiedot" << endl << endl;
    henkilo2.tulostaHenkilonTiedot();


    return 0;    
}