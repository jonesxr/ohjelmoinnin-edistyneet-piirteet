#pragma once

#include <string>

using namespace std;

class Henkilo {
private:
    string nimi;
    int ika;

public:
   
    Henkilo();

  
    void setNimi(string x);          
    void setIka(int i);             

    //kaikkiin lisätty const
    string getNimi() const;          
    int getIka() const;            
    void tulostaHenkilonTiedot() const; 
};

