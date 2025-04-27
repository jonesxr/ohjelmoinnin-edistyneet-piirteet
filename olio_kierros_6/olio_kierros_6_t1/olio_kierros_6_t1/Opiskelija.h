#pragma once
#include "Henkilo.h"
#include <vector>
#include <string>

using namespace std;

class Opiskelija : public Henkilo {
private:
    string opNro;
    vector<string> kurssit;
    int opintopisteet;
public:
    Opiskelija();
    Opiskelija(string n, int i, string on, int op = 0);
    Opiskelija(const Opiskelija& o);
    ~Opiskelija();
    string getOpNro() const;
    int getOpintopisteet() const;
    void setOpNro(string on);
    void lisaaKurssi(string kurssi);
    void tulostaTiedot() const;
    void lisaaOpintopisteita(int pisteet);
    void muutaTiedot(); // Uusi metodi nimi- ja ikä-muokkaukseen
};
