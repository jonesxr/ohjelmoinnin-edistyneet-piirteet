#pragma once

#include "Animal.h"

using namespace std;

// susi luokka, perii animal-luokan
class Wolf : public Animal {

private:

    bool kesytetty;   // onko kesytetty

public:
    // oletusrakentaja
    Wolf();
    // parametrillinen rakentaja
    Wolf(string n, int a, bool t);
    // kopiorakentaja
    Wolf(const Wolf& w);

    // purkaja
    ~Wolf();

    // getterit
    bool getIsTamed() const;
    // setterit
    void tame();

    // tulostukset
    void printInfo() const;
};
