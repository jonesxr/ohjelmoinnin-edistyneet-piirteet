#pragma once

class Noppa {
private:

    int uusinluku; //muuttuja jossa nopan uusin heitetty luku

public:
    // rakentaja sek‰ alustus 
    Noppa();

    //m‰‰ritykset
    int getViimeisinLukema();
    void heitaNoppaa();
    void kerroViimeisenHeitonLukema();


};
