#include <iostream>
#include <vector>
#include "Henkilo.h"

using namespace std;

int main() {

    setlocale(LC_ALL, "fi-FI");

    //vektori
    vector<Henkilo> henkilot; 

    // teht�v�nannon henkil�t n�m� n�kyv�t heti ominaisuudessa 2 
    henkilot.push_back(Henkilo("Anne", 20));
    henkilot.push_back(Henkilo("Kalle", 30));

    //toimintojen valinta 
    int valinta;  

    //p��silmukka jossa teht�v�nannon toiminnot
    while (true) {  
        cout << endl;
        cout << "1. lis�� uusi henkil�" << endl;
        cout << "2. tulosta henkil�t" << endl;
        cout << "3. lopeta" << endl;
        cout << "sinun valinta: ";
        cin >> valinta;
        //puskuri tyhjennys
        cin.ignore(); 

        switch (valinta) {
        //uusi henkil�
        case 1: {  
            string nimi, osoite;
            int ika;
            cout << endl;
            cout << "Anna nimi: ";
            getline(cin, nimi);
            cout << "Anna ik�: ";
            cin >> ika;
            cout << "Anna osoite: ";
            cin.ignore();
            getline(cin, osoite);

            // luodaan henkil� samalla tavalla kuin aikaisemmat
            henkilot.push_back(Henkilo(nimi, ika, osoite));
            break;  
        }

        //kaikkien henkil�iden tulostus
        case 2: {  

            for (Henkilo& i : henkilot) {  

                //tulostukset jokaiselle henkil�lle
                i.tulosta();  
            }
            break;  
        }

            //lopeta
        case 3: {  
            return 0;
        }
             //lopetus jos sy�te ei tunnettu
        default: {
            cout << "sy�te ei tunnettu";
            return 0;
        }
        }
    }

    return 0; 
}