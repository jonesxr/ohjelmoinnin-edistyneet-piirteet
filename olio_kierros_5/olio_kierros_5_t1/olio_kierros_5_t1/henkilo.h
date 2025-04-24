#pragma once


#include <string>

using namespace std; 

// Henkilo luokka, josta opiskelija ja opettaja periytyv�t
class Henkilo {
protected:
    int ika;        // ik�
    string nimi;    // nimi
public:
    // oletusrakentaja
    Henkilo();
    // parametrillinen rakentaja
    Henkilo(string n, int i);
    // kopiorakentaja
    Henkilo(const Henkilo& h);
    // purkaja
    ~Henkilo();
    // getterit
    string getNimi() const;
    int getIka() const;
    // setterit
    void setNimi(string n);
    void setIka(int i);
    // tulostukset
    void tulostaTiedot() const;
};

