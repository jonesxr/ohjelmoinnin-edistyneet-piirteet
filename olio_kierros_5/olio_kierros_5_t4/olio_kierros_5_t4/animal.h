#pragma once

#include <string>

using namespace std;

// el�in luokka, josta muut el�imet periytyv�t
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
