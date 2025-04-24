#pragma once

#pragma once
#include <string>

using namespace std;

// henkilo luokka, josta opiskelija ja opettaja periytyvät
class Henkilo {

protected:

    int ika;        // ikä

    string nimi;    // nimi

public:
    // oletusrakentaja
    Henkilo();

    // parametrillinen rakentaja

    Henkilo(string n, int i);
    // kopiorakentaja

    Henkilo(const Henkilo& h);
    // purkaja

    virtual ~Henkilo();
    // getterit

    string getNimi() const;
    int getIka() const;

    // setterit
    void setNimi(string n);
    void setIka(int i);

    // tulostukset
    virtual void tulostaTiedot() const;
};
