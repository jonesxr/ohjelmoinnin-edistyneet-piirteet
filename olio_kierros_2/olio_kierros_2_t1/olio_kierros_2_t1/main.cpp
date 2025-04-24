#include "Henkilo.h"
#include <iostream>

using namespace std;

//aliohjelma joka luo henkil�n
void henkilonluonti(){
    Henkilo henkilo("Jouni4", 21);

    cout << "aliohjelma olio" << endl;

    henkilo.tulostaHenkilonTiedot();
}


int main() {
    setlocale(LC_ALL, "fi-FI");

    //heti mainissa olio
    cout << "p��ohjelman alussaa luotu parametrillinen olio" << endl;
    Henkilo Jouni("Jouni", 21);
    cout << "Henkil�n Jouni tiedot : " << endl;
    Jouni.tulostaHenkilonTiedot();
    //purkajaa kutsutaan main funktion lopussa  (kun scope p��ttyy)


    //purkajaa kutsutaan heti kun if lause loppuu
    //if lause olio 
    cout << "if lauseen sis�ll� luotu parametrillinen olio" << endl;
    if (true) {
        Henkilo Jouni2("Jouni", 21);
        cout << "Henkil�n Jouni2 tiedot : " << endl;
        Jouni2.tulostaHenkilonTiedot();

    }



    //kutsutaan jokaisen iteraatin lopussa
    //for silmukka olio
    cout << "for silmukan sis�ll� luotu parametrillinen olio" << endl;
    for (int i = 0; i < 2; i++) {
        Henkilo Jouni3("Jouni3", 21);
        Jouni3.tulostaHenkilonTiedot();
    }


    //luodaan henkil� aliohjelmassa
    //purkajaa kutsutaan kun aliohjelma loppuu 
    henkilonluonti();

    //dynaamisen testaus
    Henkilo* DynaaminenJouni = new Henkilo("DynaaminenJouni", 21);
    DynaaminenJouni->tulostaHenkilonTiedot();

    //vapauttaminen manuaalisesti, ei tuhoudu muuten (muistivuoto)
    delete DynaaminenJouni;




    //parametritt�mien testaukset

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



  


    //n�iss� purkajaa kutsutaan main ohjelmaan lopussa
    //tietojen tulostaminen henkil�1
    cout << "Henkil� 1 tiedot" << endl << endl;
    henkilo1.tulostaHenkilonTiedot();

    //tietojen tulostaminen henkil�2
    cout << "Henkil� 2 tiedot" << endl << endl;
    henkilo2.tulostaHenkilonTiedot();

   
    //taulukko luodaan kutsumalla parametrit�nt� 
    cout << "10 hengen taulukko" << endl;
    Henkilo henkilot[10];
    

    return 0;
}