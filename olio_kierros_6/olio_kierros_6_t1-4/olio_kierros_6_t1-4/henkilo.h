#pragma once
#include <string>

using namespace std;

class Henkilo {
protected:
    int ika;
    string nimi;
public:
    Henkilo();
    Henkilo(string n, int i);
    Henkilo(const Henkilo& h);
    virtual ~Henkilo();
    string getNimi() const;
    int getIka() const;
    void setNimi(string n);
    void setIka(int i);
    virtual void tulostaTiedot() const;
};
