#include "Noppa.h"
#include <iostream>
#include <cstdlib> 
#include <ctime>
using namespace std;

// rakentaja nopalle käytännössä sama kuin yksi simulaatio heitosta 
Noppa::Noppa() {
    //arpoo 1-6
    uusinluku = (rand() % 6) + 1;

}

//1-6 simulaatio heitosta
void Noppa::heitaNoppaa() {
    uusinluku = (rand() % 6) + 1;

}

//kertoo uusimman heiton 
void Noppa::kerroViimeisenHeitonLukema() {

    cout << "uusin heitto on: " << uusinluku << "!" << endl;

}




//viimeinen heitto
int Noppa::getViimeisinLukema() {
    return uusinluku;

}