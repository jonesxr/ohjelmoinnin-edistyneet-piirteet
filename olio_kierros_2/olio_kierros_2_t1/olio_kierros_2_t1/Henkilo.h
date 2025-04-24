#pragma once

#include <string>

using namespace std;

class Henkilo {
    //muuttujat 
private:
    string nimi;
    int ika;

public:
    // Konstruktori
    Henkilo(); //parametrit�n
    Henkilo(string x, int i); //parametrillinen lis�tty

    //purkaja 
    ~Henkilo();

    // metodit

    //nimen asetus
    void setNimi(string x);

    //i�n asetus
    void setIka(int i);

    // nimen hakeminen
    string getNimi();

    //i�n hakeminen
    int getIka();

    // tulostaa henkil�n tiedot 
    void tulostaHenkilonTiedot();
};


