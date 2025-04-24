#include "Animal.h"
#include <iostream>

using namespace std;

// oletusrakentaja
Animal::Animal() : name(""), age(0) {
    cout << "eläimen oletusrakentaja" << endl << endl;
}

// parametrillinen rakentaja
Animal::Animal(string n, int a) : name(n), age(a) {
    cout << "eläimen parametrillinen rakentaja" << endl << endl;
}

// kopiorakentaja
Animal::Animal(const Animal& a) : name(a.name), age(a.age) {
    cout << "eläimen kopiorakentaja" << endl << endl;
}

// purkaja
Animal::~Animal() {
    cout << "eläimen purkaja" << endl << endl;
}

// getterit
string Animal::getName() const { return name; }
int Animal::getAge() const { return age; }

// setterit
void Animal::setName(string n) { name = n; }
void Animal::setAge(int a) { age = a; }

// tulostukset
void Animal::printInfo() const {
    cout << "eläin - nimi: " << name << ", ikä: " << age << endl << endl;
}