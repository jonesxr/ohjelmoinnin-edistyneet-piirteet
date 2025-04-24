#pragma once

#include <string>

using namespace std;

class Henkilo {
    //muuttujat 
private:
    string nimi;    
    int ika;        

public:
    // Konstruktori
    Henkilo();

    // metodit

    //nimen asetus
    void setNimi(string x);   

    //iän asetus
    void setIka(int i);      

    // nimen hakeminen
    string getNimi();     

    //iän hakeminen
    int getIka();            

    // tulostaa henkilön tiedot 
    void tulostaHenkilonTiedot();    
};










