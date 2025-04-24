#include "Noppa.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Palauttaa noppien lukumäärän
int Noppa::getNoppienLkm() {
    return noppien_lkm;
}

// oletusrakentaja vain 1 noppa
Noppa::Noppa() {
    //asetetaan noppa yhdeksi
    noppien_lkm = 1;
    //1-6
    noppa1 = (rand() % 6) + 1;
    //nollaus lopuille 
    noppa2 = 0;

    noppa3 = 0;

    noppa4 = 0;

    noppa5 = 0;

}

// parametrillinen rakentaja 1-5 noppaa
//alustetaan nopat jotka ovat käytössä, jos ei arvo 0
Noppa::Noppa(int lkm) {

    //alustukset noppien lkm ennen ehtolauseita muuten iso BUGI
    if (lkm >= 1 and lkm <= 5) {
        noppien_lkm = lkm; 
    }


    
    noppa1 = (rand() % 6) + 1;

    if (noppien_lkm >= 2) {
        noppa2 = (rand() % 6) + 1;
    }
    else {
        noppa2 = 0;
    }

    if (noppien_lkm >= 3) {
        noppa3 = (rand() % 6) + 1;
    }
    else {
        noppa3 = 0;
    }

    if (noppien_lkm >= 4) {
        noppa4 = (rand() % 6) + 1;
    }
    else {
        noppa4 = 0;
    }

    if (noppien_lkm >= 5) {
        noppa5 = (rand() % 6) + 1;
    }
    else {
        noppa5 = 0;
    }


}


//verrataan noppiien
void Noppa::setNoppienLkm(int lkm) {
    if (lkm >= 1 and lkm <= 5) { 
        noppien_lkm = lkm;
        // Nollataan ylimääräiset nopat
        if (noppien_lkm < 2) noppa2 = 0;
        if (noppien_lkm < 3) noppa3 = 0;
        if (noppien_lkm < 4) noppa4 = 0;
        if (noppien_lkm < 5) noppa5 = 0;
    }
}

// heittää arvot kaikille nopille jotka ovat käytössä
// jos noppien lkm on pienempi kuin noppien määrä asettaa tuloksen nollaksi (summa ei muutu)
//käytännössä kopio parametrillisen nopan alustuksesta
void Noppa::heitaNoppaa() {

    noppa1 = (rand() % 6) + 1;

    if (noppien_lkm >= 2) {
        noppa2 = (rand() % 6) + 1;
    }
    else {
        noppa2 = 0;
    }

    if (noppien_lkm >= 3) {
        noppa3 = (rand() % 6) + 1;
    }
    else {
        noppa3 = 0;
    }

    if (noppien_lkm >= 4) {
        noppa4 = (rand() % 6) + 1;
    }
    else {
        noppa4 = 0;
    }

    if (noppien_lkm >= 5) {
        noppa5 = (rand() % 6) + 1;
    }
    else {
        noppa5 = 0;
    }
}


// tulostaa jokaisen nopan arvon ja summaa ne 
void Noppa::kerroViimeisenHeitonLukema() {

    //noppien summa muuttuja 
    int summa = noppa1;

    cout << "noppa1: " << noppa1;

    //jos kaksi noppaa jne viiteen asti
    //jos noppa on käytössä lisätään sen antama luku edellisten summaan
    if (noppien_lkm >= 2) {
        cout << ", noppa2: " << noppa2;
        summa = noppa2 + summa;
    }

    if (noppien_lkm >= 3) {
        cout << ", noppa3: " << noppa3;
        summa = noppa3 + summa;
    }

    if (noppien_lkm >= 4) {
        cout << ", noppa4: " << noppa4;
        summa = noppa4 + summa;
    }

    if (noppien_lkm >= 5) {
        cout << ", noppa5: " << noppa5;
        summa = noppa5 + summa;
    }

  

    //toimii perjatteessa vain jos nopat heitetään staattisesssa numerojärjestyksessä 
    cout << ", yhteensä : " << summa << endl;



}
//sama kuin kerroViimeisenHeitonLukema ilman tulostuksia
int Noppa::getViimeisinLukema() {

    int summa = noppa1;
    if (noppien_lkm >= 2) {
        summa = noppa2 + summa;
    }

    if (noppien_lkm >= 3) {
        summa = noppa3 + summa;
    }

    if (noppien_lkm >= 4) {
        summa = noppa4 + summa;
    }

    if (noppien_lkm >= 5) {
        summa = noppa5 + summa;
    }


    return summa;
 
}