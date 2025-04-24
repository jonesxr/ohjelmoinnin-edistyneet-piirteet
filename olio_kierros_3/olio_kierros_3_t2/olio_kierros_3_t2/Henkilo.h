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

    //lis�tty osoite Henkilo luokan sis�lle
    Osoite osoite;

public:

    Henkilo();


    void setNimi(string x);
    void setIka(int i);

    //kaikkiin lis�tty const
    string getNimi() const;
    int getIka() const;
    void tulostaHenkilonTiedot() const;



    //lis�tty osoitteen asettaminen
    void setOsoite(Osoite o);

    //lis�tty osoitteen hakeminen 
    Osoite getOsoite() const;

};