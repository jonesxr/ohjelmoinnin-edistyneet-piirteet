#pragma once

#include <string>

using namespace std;


class Henkilo {

private:

    string nimi;    

    int ika;       

    string osoite; 


public:

    //rakentaja
    Henkilo(string n, int i, string o = "");

    // tulostus
    void tulosta();
};