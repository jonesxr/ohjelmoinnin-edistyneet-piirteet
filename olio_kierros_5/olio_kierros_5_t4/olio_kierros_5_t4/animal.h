#pragma once

#include <string>

using namespace std;

// eläin luokka, josta muut eläimet periytyvät
class Animal {
protected:
    string name;    

    int age;      

public:

    // oletusrakentaja

    Animal();

    // parametrillinen rakentaja
    Animal(string n, int a);

    // kopiorakentaja
    Animal(const Animal& a);

    // purkaja
    ~Animal();

    // getterit
    string getName() const;

    int getAge() const;

    // setterit
    void setName(string n);
    void setAge(int a);

    // tulostukset
    void printInfo() const;
};
