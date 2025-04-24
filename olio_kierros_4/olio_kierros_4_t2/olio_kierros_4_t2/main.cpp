#include "Henkilo.h"
#include <iostream>

using namespace std;

// aliohjelma arvoparametrill‰
//k‰ytt‰‰ t1 tehty‰ kopiorakentajaa muuten k‰ytt‰isi oletuskopiorakentajaa 
void doSomethingArvoparametri(Henkilo Henkilo_arvo) {
    cout << "arvoparametri " << endl;
    Henkilo_arvo.tulostaHenkilonTiedot();
}

// aliohjelma viittausparametrill‰
//lis‰ys
//viitataan alkuper‰iseen Henkilo olion sis‰lle t‰ss‰ tilanteessa vain henkilo1 
void doSomethingViittausparametri(const Henkilo& Henkilo_viittaus) {
    cout << "viittausparametri " << endl;
     Henkilo_viittaus.tulostaHenkilonTiedot();
}


int main() {
    setlocale(LC_ALL, "fi-FI");

    // henkilˆ olio 1 
    Henkilo henkilo1;
    henkilo1.setNimi("Kalle");
    henkilo1.setIka(20);

    // tulostus henkilˆ 1
    cout << "Henkilˆ 1 tiedot" << endl;
    henkilo1.tulostaHenkilonTiedot();

    //luodaan kopio henkilˆ 1
    Henkilo kopio1 = henkilo1;
    cout << "Kopio 1 tiedot" << endl;
    kopio1.tulostaHenkilonTiedot();



    //lis‰ykset
    //kutsuu tehty‰ kopiota
    doSomethingArvoparametri(henkilo1);     
    //ei kutsu kopiota
    doSomethingViittausparametri(henkilo1); 

    //vastauksia kysymyksiin ensimm‰ist‰ versiota eli arvoparametri‰ ei tulisi k‰ytt‰‰ koska se luo ylim‰‰r‰isen kopion koko oliosta 
    // == vie lis‰‰ muistia ja resursseja ylip‰‰t‰‰n 

    //jos viittausparametri muutetaan const muotoon voidaan lis‰t‰ vain Henkilo-luoka eteen const
    //yll‰olevaan ohjelmaan lis‰tt‰v‰t muutokset jotta const voidaan k‰ytt‰‰
    // lis‰t‰‰n      "void Henkilo::tulostaHenkilonTiedot() const" henkilo.h tiedostoon 
    // lis‰t‰‰n      "void Henkilo::tulostaHenkilonTiedot() const"   Henkilo.cpp tiedostoon 
    //const tulisi k‰ytt‰‰ kun funktio ei tule muuttumaan ohjelmassa 
    //jos halutaan suojata ohjelmaa enemm‰n virheilt‰ ja muutoksilta 




    return 0;
}


