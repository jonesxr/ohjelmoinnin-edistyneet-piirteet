#pragma once
#include "Henkilo.h"
#include <vector>
#include <string>

using namespace std;

// Opettaja luokka, perii Henkilo-luokan
class Opettaja : public Henkilo {
private:
    string koulutussala;      // koulutussala
    vector<string> kurssit;   // vastuukurssit


public:
    // oletusrakentaja
    Opettaja();

    // parametrillinen rakentaja
    Opettaja(string n, int i, string ks, vector<string> k = {});

    // kopiorakentaja
    Opettaja(const Opettaja& o);

    // purkaja
    ~Opettaja();

    // getterit
    string getKoulutussala() const;

    // setterit
    void setKoulutussala(string ks);


    // kurssien hallinta ja tulostukset
    void tulostaTiedot() const;

    void poistaKurssi(string kurssiNimi);

    void lisaaKurssi(string kurssi);
};
