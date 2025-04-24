#include "Animal.h"
#include <iostream>

using namespace std;

// oletusrakentaja
Animal::Animal() : name(""), age(0) {
    cout << "el�imen oletusrakentaja" << endl << endl;
}

// parametrillinen rakentaja
Animal::Animal(string n, int a) : name(n), age(a) {
    cout << "el�imen parametrillinen rakentaja" << endl << endl;
}

// kopiorakentaja
Animal::Animal(const Animal& a) : name(a.name), age(a.age) {
    cout << "el�imen kopiorakentaja" << endl << endl;
}

// purkaja
Animal::~Animal() {
    cout << "el�imen purkaja" << endl << endl;
}

// getterit
string Animal::getName() const { return name; }
int Animal::getAge() const { return age; }

// setterit
void Animal::setName(string n) { name = n; }
void Animal::setAge(int a) { age = a; }

// tulostukset
void Animal::printInfo() const {
    cout << "el�in - nimi: " << name << ", ik�: " << age << endl << endl;
}