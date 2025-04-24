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

// palauttaa p�iv�yksen
Paivays Kalenterimerkinta::getPaivays() {

    return paivays;
}

//palauttaa k�ytt�j�n sy�tt�m�n asian
string Kalenterimerkinta::getAsia() {

    return asia;
}

//palauttaa tilan p��ll� / pois
bool Kalenterimerkinta::getMuistutus() {

    return muistutus;
}

// setterit
//palauttaa p�iv�yksen
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

//tulostukset kalenteri merkinn�lle
void Kalenterimerkinta::tulostaMerkinta() {

    cout << "kalenterimerkint�: " << endl;

    cout << "p�iv�ys: ";

    paivays.tulostaPaivays();

    cout << "asia: " << asia << endl;

    cout << "muistutus: ";

    if (muistutus) {

        cout << ": kyll�" << endl;
    }

    else {
        cout << ": ei " << endl;
    }


}

// kysyy koko merkinn�n tiedot k�ytt�j�lt� 
void Kalenterimerkinta::kysyTiedot() {
    int p, k, v;
    string sy�te_asia;
    char vastaus_sy�te;

    cout << "Sy�t� p�iv� : ";
    cin >> p;
    paivays.setPaiva(p);



    cout << "Sy�t� kuukausi : ";
    cin >> k;
    paivays.setKuukausi(k);



    cout << "Sy�t� vuosi : ";
    cin >> v;
    paivays.setVuosi(v);



    cout << "Sy�t� asia : ";
    
    cin.ignore();  
    getline(cin, sy�te_asia);
    asia = sy�te_asia;

    cout << "Muistutus p��ll� (k tai e)? ";
    cin >> vastaus_sy�te;
    muistutus = (vastaus_sy�te == 'k');
    cout << endl;
}