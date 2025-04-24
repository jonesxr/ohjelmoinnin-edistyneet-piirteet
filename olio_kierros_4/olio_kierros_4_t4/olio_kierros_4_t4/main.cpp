#include <iostream>
#include <vector>
#include "Henkilo.h"

using namespace std;

int main() {
    setlocale(LC_ALL, "fi-FI");


    // vektori
    vector<Henkilo*> henkilot;

    // lis�t��n 5 henkil�� osoitimilla

    henkilot.push_back(new Henkilo("Anne", 20));
    henkilot.push_back(new Henkilo("JOUNI", 21));
    henkilot.push_back(new Henkilo("SANNI", 24));
    henkilot.push_back(new Henkilo("PEKKA", 32));
    henkilot.push_back(new Henkilo("ANNA", 21));

    //tulostetaan koko vektorin sis�lt�
    cout << "Vektorin henkil�t:" << endl;
    for (const Henkilo* x : henkilot) {
        //tarvitaan nuoli operaattoria osoittamaan Henkilo olioon
        x->tulosta();
    }



    cout << "Ohjelma p��ttyy" << endl;
    return 0;
}







