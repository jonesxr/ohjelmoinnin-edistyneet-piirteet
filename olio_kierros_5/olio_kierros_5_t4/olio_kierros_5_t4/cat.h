#pragma once

#include "Animal.h"
#include <string>

using namespace std;

// kissa luokka, perii animal-luokan
class Cat : public Animal {

private:

    string color;   // kissan väri

public:

    // oletusrakentaja
    Cat();

    // parametrillinen rakentaja
    Cat(string n, int a, string c);

    // kopiorakentaja
    Cat(const Cat& c);

    // purkaja
    ~Cat();

    // getterit
    string getColor() const;

    // setterit
    void changeColor(string c);

    // tulostukset
    void printInfo() const;
};
