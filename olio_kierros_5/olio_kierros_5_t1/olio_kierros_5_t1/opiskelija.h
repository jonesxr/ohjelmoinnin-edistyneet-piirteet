#pragma once
#include "Henkilo.h"
#include <vector>
#include <string>

using namespace std; 

// Opiskelija luokka, perii Henkilo-luokan
class Opiskelija : public Henkilo {
private:
    string opNro;               // opiskelijanumero
    vector<string> kurssit;     // suoritetut kurssit
    int opintopisteet;          // opintopistesaldo


public:
    // oletusrakentaja

    Opiskelija();

    // parametrillinen rakentaja
    Opiskelija(string n, int i, string on, int op = 0);

    // kopiorakentaja
    Opiskelija(const Opiskelija& o);

    // purkaja
    ~Opiskelija();

    // getterit
    string getOpNro() const;

    int getOpintopisteet() const;

    // setterit
    void setOpNro(string on);

    // kurssien ja pisteiden hallinta
    void lisaaKurssi(string kurssi);

    void tulostaTiedot() const;

    void lisaaOpintopisteita(int pisteet);
};