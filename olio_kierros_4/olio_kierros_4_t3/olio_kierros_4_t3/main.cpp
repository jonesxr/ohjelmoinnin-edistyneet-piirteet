#include <iostream>
#include <vector>
#include "Henkilo.h"

using namespace std;

int main() {

    setlocale(LC_ALL, "fi-FI");

    //vektori
    vector<Henkilo> henkilot; 

    // tehtävänannon henkilöt nämä näkyvät heti ominaisuudessa 2 
    henkilot.push_back(Henkilo("Anne", 20));
    henkilot.push_back(Henkilo("Kalle", 30));

    //toimintojen valinta 
    int valinta;  

    //pääsilmukka jossa tehtävänannon toiminnot
    while (true) {  
        cout << endl;
        cout << "1. lisää uusi henkilö" << endl;
        cout << "2. tulosta henkilöt" << endl;
        cout << "3. lopeta" << endl;
        cout << "sinun valinta: ";
        cin >> valinta;
        //puskuri tyhjennys
        cin.ignore(); 

        switch (valinta) {
        //uusi henkilö
        case 1: {  
            string nimi, osoite;
            int ika;
            cout << endl;
            cout << "Anna nimi: ";
            getline(cin, nimi);
            cout << "Anna ikä: ";
            cin >> ika;
            cout << "Anna osoite: ";
            cin.ignore();
            getline(cin, osoite);

            // luodaan henkilö samalla tavalla kuin aikaisemmat
            henkilot.push_back(Henkilo(nimi, ika, osoite));
            break;  
        }

        //kaikkien henkilöiden tulostus
        case 2: {  

            for (Henkilo& i : henkilot) {  

                //tulostukset jokaiselle henkilölle
                i.tulosta();  
            }
            break;  
        }

            //lopeta
        case 3: {  
            return 0;
        }
             //lopetus jos syöte ei tunnettu
        default: {
            cout << "syöte ei tunnettu";
            return 0;
        }
        }
    }

    return 0; 
}