#include "Cat.h"
#include <iostream>

using namespace std;

// oletusrakentaja
Cat::Cat() : Animal(), color("tuntematon") {
    cout << "kissan oletusrakentaja" << endl << endl;
}

// parametrillinen rakentaja
Cat::Cat(string n, int a, string c) : Animal(n, a), color(c) {
    cout << "kissan parametrillinen rakentaja" << endl << endl;
}

// kopiorakentaja
Cat::Cat(const Cat& c) : Animal(c), color(c.color) {
    cout << "kissan kopiorakentaja" << endl << endl;
}

// purkaja
Cat::~Cat() {
    cout << "kissan purkaja" << endl << endl;
}

// getterit
string Cat::getColor() const { return color; }

// setterit
void Cat::changeColor(string c) { color = c; }

// tulostukset
void Cat::printInfo() const {
    cout << "kissa - ";
    Animal::printInfo();
    cout << "väri: " << color << endl << endl;
}