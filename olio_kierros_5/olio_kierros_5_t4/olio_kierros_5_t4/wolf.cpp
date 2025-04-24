#include "Wolf.h"
#include <iostream>

using namespace std;

// oletusrakentaja
Wolf::Wolf() : Animal(), kesytetty(false) {
    cout << "suden oletusrakentaja" << endl << endl;
}

// parametrillinen rakentaja
Wolf::Wolf(string n, int a, bool t) : Animal(n, a), kesytetty(t) {
    cout << "suden parametrillinen rakentaja" << endl << endl;
}

// kopiorakentaja
Wolf::Wolf(const Wolf& w) : Animal(w), kesytetty(w.kesytetty) {
    cout << "suden kopiorakentaja" << endl << endl;
}

// purkaja
Wolf::~Wolf() {
    cout << "suden purkaja" << endl << endl;
}

// getterit
bool Wolf::getIsTamed() const { return kesytetty; }

// setterit
void Wolf::tame() { kesytetty = true; }

// tulostukset
void Wolf::printInfo() const {
    cout << "susi - ";
    Animal::printInfo();
    cout << "kesytetty: " << (kesytetty ? "kyllä" : "ei") << endl << endl;
}