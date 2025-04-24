#include "kalenteri.h"
#include <iostream>

using namespace std;

// oletusrakentajan alustus
Kalenterimerkinta::Kalenterimerkinta() {
    asia = "";
    muistutus = false;
   
}

// parametrillinen rakentaja
Kalenterimerkinta::Kalenterimerkinta(Paivays p, string a, bool m) {
    paivays = p;
    asia = a;
    muistutus = m;

}

//purkaja
Kalenterimerkinta::~Kalenterimerkinta() {
}

// palauttaa päiväyksen
Paivays Kalenterimerkinta::getPaivays() {

    return paivays;
}

//palauttaa käyttäjän syöttämän asian
string Kalenterimerkinta::getAsia() {

    return asia;
}

//palauttaa tilan päällä / pois
bool Kalenterimerkinta::getMuistutus() {

    return muistutus;
}

// setterit
//palauttaa päiväyksen
void Kalenterimerkinta::setPaivays(Paivays p) {
    paivays = p;

}

//palauttaa asian
void Kalenterimerkinta::setAsia(string a) {

    asia = a;
}

//palauttaa muistutuksen
void Kalenterimerkinta::setMuistutus(bool m) {

    muistutus = m;
}

//tulostukset kalenteri merkinnälle
void Kalenterimerkinta::tulostaMerkinta() {

    cout << "kalenterimerkintä: " << endl;

    cout << "päiväys: ";

    paivays.tulostaPaivays();

    cout << "asia: " << asia << endl;

    cout << "muistutus: ";

    if (muistutus) {

        cout << ": kyllä" << endl;
    }

    else {
        cout << ": ei " << endl;
    }


}

// kysyy koko merkinnän tiedot käyttäjältä 
void Kalenterimerkinta::kysyTiedot() {
    int p, k, v;
    string syöte_asia;
    char vastaus_syöte;

    cout << "Syötä päivä : ";
    cin >> p;
    paivays.setPaiva(p);



    cout << "Syötä kuukausi : ";
    cin >> k;
    paivays.setKuukausi(k);



    cout << "Syötä vuosi : ";
    cin >> v;
    paivays.setVuosi(v);



    cout << "Syötä asia : ";
    
    cin.ignore();  
    getline(cin, syöte_asia);
    asia = syöte_asia;

    cout << "Muistutus päällä (k tai e)? ";
    cin >> vastaus_syöte;
    muistutus = (vastaus_syöte == 'k');
    cout << endl;
}