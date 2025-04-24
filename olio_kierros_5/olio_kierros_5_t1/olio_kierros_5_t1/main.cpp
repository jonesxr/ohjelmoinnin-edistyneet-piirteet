#include "Henkilo.h"
#include "Opettaja.h"
#include "Opiskelija.h"
#include <iostream>

using namespace std;


int main() {


    //lis‰t‰‰n teht‰v‰n vaatimus aikasemman tehdyn teht‰v‰n main osioon ja kaikki muu pysyy samana paitsi main 



    setlocale(LC_ALL, "fi-FI");

    // testataan henkilo-luokkaa
    cout << "henkilˆn tiedot:" << endl;
    // oletusrakentaja
    Henkilo henkilo1;
    henkilo1.setNimi("tuntematon henkilˆ");
    henkilo1.setIka(30);
    cout << "henkilˆ oletusrakentajalla:" << endl;
    henkilo1.tulostaTiedot();
    cout << endl << endl;

    // parametrillinen rakentaja
    Henkilo henkilo2("tuntematon2", 25);
    cout << "henkilˆ parametrillisella rakentajalla:" << endl;
    henkilo2.tulostaTiedot();
    cout << endl << endl;

    // kopiorakentaja
    Henkilo henkilo3(henkilo2);
    cout << "henkilˆ kopiorakentajalla:" << endl;
    henkilo3.tulostaTiedot();
    cout << endl << endl;

    // testataan opettajaa
    cout << "opettajan tiedot:" << endl;
    // oletusrakentaja
    Opettaja opettaja1;
    opettaja1.setNimi("ohjelmoinnin opettaja 1");
    opettaja1.setIka(50);
    opettaja1.setKoulutussala("ohjelmointi");
    opettaja1.lisaaKurssi("ohjelmointi c++");
    cout << "opettaja oletusrakentajalla ennen kurssin poistoa:" << endl;
    opettaja1.tulostaTiedot();
    cout << endl << endl;
    opettaja1.poistaKurssi("ohjelmointi c++");
    cout << "opettaja oletusrakentajalla kurssin poiston j‰lkeen:" << endl;
    opettaja1.tulostaTiedot();
    cout << endl << endl;

    // parametrillinen rakentaja
    Opettaja opettaja2("ohjelmoinnin opettaja 2", 45, "ohjelmointi", { "ohjelmointi python" });
    cout << "opettaja parametrillisella rakentajalla:" << endl;
    opettaja2.tulostaTiedot();
    cout << endl << endl;

    // kopiorakentaja
    Opettaja opettaja3(opettaja2);
    opettaja3.lisaaKurssi("ohjelmointi java");
    cout << "opettaja kopiorakentajalla lis‰kurssin j‰lkeen:" << endl;
    opettaja3.tulostaTiedot();
    cout << endl << endl;

    // testataan opiskelijaa
    cout << "opiskelijan tiedot:" << endl;
    // oletusrakentaja
    Opiskelija opiskelija1;
    opiskelija1.setNimi("jouni suosola 1");
    opiskelija1.setIka(21);
    opiskelija1.setOpNro("ABC123");
    opiskelija1.lisaaKurssi("ohjelmointi");
    opiskelija1.lisaaOpintopisteita(5);
    cout << "opiskelija oletusrakentajalla:" << endl;
    opiskelija1.tulostaTiedot();
    cout << endl << endl;

    // parametrillinen rakentaja
    Opiskelija opiskelija2("jouni suosola 2", 20, "ABC321", 100);
    opiskelija2.lisaaKurssi("fysiikka");
    cout << "opiskelija parametrillisella rakentajalla:" << endl;
    opiskelija2.tulostaTiedot();
    cout << endl << endl;

    // kopiorakentaja
    Opiskelija opiskelija3(opiskelija2);
    opiskelija3.lisaaOpintopisteita(10);
    cout << "opiskelija kopiorakentajalla lis‰pisteiden j‰lkeen:" << endl;
    opiskelija3.tulostaTiedot();
    cout << endl << endl;

    return 0;
}



