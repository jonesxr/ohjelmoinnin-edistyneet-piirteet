#pragma once

#include <string>

using namespace std;

class Henkilo {
private:
    string nimi;
    int ika;

public:

    Henkilo();

    //kopiorakentaja
    Henkilo(const Henkilo&);

    void setNimi(string x);

    void setIka(int i);

    string getNimi();

    int getIka();

    void tulostaHenkilonTiedot() const;
};