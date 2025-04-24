#include "Henkilo.h"
#include <iostream>

using namespace std;

// asetetaan tiedot 
Henkilo::Henkilo(string n, int i, string o) {
    nimi = n;   
    ika = i;     
    osoite = o;  
}

// tulostus
void Henkilo::tulosta() {
    cout << endl;
    cout << "nimi: " << nimi;
    cout << ", ikä: " << ika;
    cout << ", osoite: " << osoite << endl;
    cout << endl;
}