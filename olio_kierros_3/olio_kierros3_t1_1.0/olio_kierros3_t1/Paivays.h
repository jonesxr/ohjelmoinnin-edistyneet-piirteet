#pragma once

class Paivays {
private:
    int paiva;
    int kuukausi;
    int vuosi;

public:
    Paivays();

    void setPaiva(int p);
    void setKuukausi(int k);
    void setVuosi(int v);


    //kaikkiin lisätty const 
    int getPaiva() const;        
    int getKuukausi() const;   
    int getVuosi() const;        
    void tulostaPaivays() const; 
};
