#include "Henkilo.h"
#include <iostream>

using namespace std;

//aliohjelma joka luo henkilön
void henkilonluonti(){
    Henkilo henkilo("Jouni4", 21);

    cout << "aliohjelma olio" << endl;

    henkilo.tulostaHenkilonTiedot();
}


int main() {
    setlocale(LC_ALL, "fi-FI");

    //heti mainissa olio
    cout << "pääohjelman alussaa luotu parametrillinen olio" << endl;
    Henkilo Jouni("Jouni", 21);
    cout << "Henkilön Jouni tiedot : " << endl;
    Jouni.tulostaHenkilonTiedot();
    //purkajaa kutsutaan main funktion lopussa  (kun scope päättyy)


    //purkajaa kutsutaan heti kun if lause loppuu
    //if lause olio 
    cout << "if lauseen sisällä luotu parametrillinen olio" << endl;
    if (true) {
        Henkilo Jouni2("Jouni", 21);
        cout << "Henkilön Jouni2 tiedot : " << endl;
        Jouni2.tulostaHenkilonTiedot();

    }



    //kutsutaan jokaisen iteraatin lopussa
    //for silmukka olio
    cout << "for silmukan sisällä luotu parametrillinen olio" << endl;
    for (int i = 0; i < 2; i++) {
        Henkilo Jouni3("Jouni3", 21);
        Jouni3.tulostaHenkilonTiedot();
    }


    //luodaan henkilö aliohjelmassa
    //purkajaa kutsutaan kun aliohjelma loppuu 
    henkilonluonti();

    //dynaamisen testaus
    Henkilo* DynaaminenJouni = new Henkilo("DynaaminenJouni", 21);
    DynaaminenJouni->tulostaHenkilonTiedot();

    //vapauttaminen manuaalisesti, ei tuhoudu muuten (muistivuoto)
    delete DynaaminenJouni;




    //parametrittömien testaukset

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



  


    //näissä purkajaa kutsutaan main ohjelmaan lopussa
    //tietojen tulostaminen henkilö1
    cout << "Henkilö 1 tiedot" << endl << endl;
    henkilo1.tulostaHenkilonTiedot();

    //tietojen tulostaminen henkilö2
    cout << "Henkilö 2 tiedot" << endl << endl;
    henkilo2.tulostaHenkilonTiedot();

   
    //taulukko luodaan kutsumalla parametritöntä 
    cout << "10 hengen taulukko" << endl;
    Henkilo henkilot[10];
    

    return 0;
}