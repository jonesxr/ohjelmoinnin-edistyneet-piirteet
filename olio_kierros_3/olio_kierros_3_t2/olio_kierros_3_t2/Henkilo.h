#pragma once

#include <string>

using namespace std;

//osoite luokka
class Osoite { 
private:
    
    string katuosoite;
    string postinumero;
    string kaupunki;

public: 

    Osoite();

    void setKatuosoite(string k);
    void setPostinumero(string p);
    void setKaupunki(string ka);

    string getKatuosoite() const;
    string getPostinumero() const;
    string getKaupunki() const;

    void tulostaOsoite() const;
};


class Henkilo {
private:
    string nimi;
    int ika;

    //lisätty osoite Henkilo luokan sisälle
    Osoite osoite;

public:

    Henkilo();


    void setNimi(string x);
    void setIka(int i);

    //kaikkiin lisätty const
    string getNimi() const;
    int getIka() const;
    void tulostaHenkilonTiedot() const;



    //lisätty osoitteen asettaminen
    void setOsoite(Osoite o);

    //lisätty osoitteen hakeminen 
    Osoite getOsoite() const;

};