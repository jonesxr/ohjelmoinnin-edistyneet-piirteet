#include "Henkilo.h"
#include <iostream>

using namespace std;

//muuttujien alustus alustaminen konstruktorissa
Osoite::Osoite() { 
    katuosoite = "";
    postinumero = "";
    kaupunki = "";

}

//osoitteen asetus parametrin�
void Osoite::setKatuosoite(string k) { 
    katuosoite = k;

}

//palautetaan osoite
string Osoite::getKatuosoite() const {
    return katuosoite;
}



//postinumeron asetus parametrin�
void Osoite::setPostinumero(string p) { 
    postinumero = p;

}

//palautetaan postinumero
string Osoite::getPostinumero() const {
    return postinumero;
}



//kaupungin asettaminen parametrin�
void Osoite::setKaupunki(string kau) { 
    kaupunki = kau;

}


//palautetaan kaupunki
string Osoite::getKaupunki() const {
    return kaupunki;

}



//tietojen tulostaminen
void Osoite::tulostaOsoite() const {
    cout << "osoite: " << katuosoite << ", " << postinumero << ", " << kaupunki << endl;

}



//lis�tty osoitteen asettaminen
void Henkilo::setOsoite(Osoite o) {
    osoite = o;

}


//lis�tty osoitteen hakeminen
Osoite Henkilo::getOsoite() const {
    return osoite;

}




///////////////////////////////////////////////////////////////////////////////////////////////

// Muuttujien alustaminen konstruktorissa
Henkilo::Henkilo() {
    nimi = "";
    ika = 0;
}

// I�n asettaminen parametrin�
void Henkilo::setIka(int i) {
    ika = i;
}

// Palautetaan ik�
int Henkilo::getIka() const {  
    return ika;
}

// Asetetaan nimi
void Henkilo::setNimi(string x) {
    nimi = x;
}

// Palautetaan nimi
string Henkilo::getNimi() const {  
    return nimi;
}



// Tulostukset
void Henkilo::tulostaHenkilonTiedot() const {  
    cout << "Nimi : " << nimi << endl;
    
    cout << "Ik�  : " << ika << endl;
    //lis�tty osoite tietojen tulostus 
    osoite.tulostaOsoite(); 
    cout << endl;
    cout << endl;
}