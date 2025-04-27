#pragma once
#include "Henkilo.h"
#include <vector>
#include <string>

using namespace std;

// opettaja luokka perii henkiloluokan
class Opettaja : public Henkilo {
private:
    string kl;      // koulutussala
    vector<string> kurssit;   // vastuukurssit
public:
    Opettaja();
    Opettaja(string n, int i, string ks, vector<string> k = {});
    Opettaja(const Opettaja& o);
    ~Opettaja();
    string getKoulutussala() const;
    void setKoulutussala(string ks);
    void tulostaTiedot() const;
    void poistaKurssi(string kurssiNimi);
    void lisaaKurssi(string kurssi);
};