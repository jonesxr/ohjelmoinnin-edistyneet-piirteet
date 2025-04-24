#pragma once

class Noppa {
private:

    int noppien_lkm;    

    //jokainen noppa erikseen
    int noppa1;        

    int noppa2;      

    int noppa3;     

    int noppa4;   

    int noppa5;         

public:
    // rakentajat 
    //1 noppa
    Noppa();       

    //1-5 noppaa
    Noppa(int lkm);     

    //palauttaa return noppien lukum‰‰r‰n
    int getNoppienLkm(); 

    //viimeisen heiton summa ja noppa mill‰ heitetty
    int getViimeisinLukema();
   
    //asettaa noppien lukum‰‰r‰n 
    void setNoppienLkm(int lkm); 

    //heitt‰‰ kaikki asetetut nopat
    void heitaNoppaa();  

    //noppien summan ja lukum‰‰r‰n tulostus
    void kerroViimeisenHeitonLukema(); 

    
};

