#include "Animal.h"
#include "Wolf.h"
#include "Cat.h"
#include <iostream>

using namespace std;

// p‰‰ohjelma minecraft elukoilla
int main() {
   
    setlocale(LC_ALL, "fi-FI");

    // animal-luokan testaus
    cout << "el‰in luokan oliot : " << endl;
    // oletusrakentaja
    Animal animal1;
    animal1.setName("peura");
    animal1.setAge(5);
    cout << "oletusrakentaja: ";
    animal1.printInfo();

    // parametrillinen rakentaja
    Animal animal2("lammas", 3);
    cout << "parametrillinen rakentaja: ";
    animal2.printInfo();

    // kopiorakentaja
    Animal animal3(animal2);
    cout << "kopiorakentaja: ";
    animal3.printInfo();

    // wolf-luokan testaus
    cout << "susi luokan oliot:" << endl;
    // oletusrakentaja
    Wolf wolf1;
    wolf1.setName("susi");
    wolf1.setAge(4);
    wolf1.tame();
    cout << "oletusrakentaja: ";
    wolf1.printInfo();

    // parametrillinen rakentaja
    Wolf wolf2("harmaa", 2, true);
    cout << "parametrillinen rakentaja: ";
    wolf2.printInfo();

    // kopiorakentaja
    Wolf wolf3(wolf2);
    cout << "kopiorakentaja: ";
    wolf3.printInfo();

    // cat-luokan testaus
    cout << "kissa luokan oliot:" << endl;
    // oletusrakentaja
    Cat cat1;
    cat1.setName("kissa");
    cat1.setAge(1);
    cat1.changeColor("raidallinen");
    cout << "oletusrakentaja: ";
    cat1.printInfo();

    // parametrillinen rakentaja
    Cat cat2("musta", 3, "musta");
    cout << "parametrillinen rakentaja: ";
    cat2.printInfo();

    // kopiorakentaja
    Cat cat3(cat2);
    cat3.changeColor("oranssi");
    cout << "kopiorakentaja: ";
    cat3.printInfo();

    return 0;
}