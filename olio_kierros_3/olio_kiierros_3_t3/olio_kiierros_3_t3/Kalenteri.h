#pragma once
#include "Paivays.h"
#include <string>

using namespace std;


//uusi luokka jonka sis‰ll‰ aikaisemmin tehty paivays luokka
class Kalenterimerkinta {
private:

    //vanhaa
    Paivays paivays;    

    //uutta
    string asia;        
    bool muistutus;     

public:


    //oletusrakentaja
    Kalenterimerkinta();   
    //parametrillinen rakentaja
    Kalenterimerkinta(Paivays p, string a, bool m);  
    //purkaja 
    ~Kalenterimerkinta();   

    // getterit
    //palauttaa p‰iv‰yksen
    Paivays getPaivays();
    //palauttaa asian
    string getAsia();   
    //palauttaa muistutuksen tilan
    bool getMuistutus();  


    // setterit
    //p‰iv‰ys
    void setPaivays(Paivays p);  

    //asia 
    void setAsia(string a);   

    //muistutuksen tila p‰‰ll‰/pois
    void setMuistutus(bool m);   


    //kysyy merkinn‰n tiedot k‰ytt‰j‰lt‰
    void kysyTiedot();

    //tulostaa merkinn‰n tiedot
    void tulostaMerkinta(); 
          
};