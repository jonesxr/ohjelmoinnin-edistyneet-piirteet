/*
//jouni suosola
//kierros 2  t2
#include <iostream>
#include <cmath>  

using namespace std;

int main() {
    setlocale(LC_ALL, "fi-FI");
    double syöte;

    cout << "Anna joku desimaaliluku luku: ";
    cin >> syöte;

    //floor antaa alemmaksi pyöristetyn kokonaisluvun
    //ceil antaa ylemmän pyöristetyn kokonaisluvun
    
    int alempi = floor(syöte);
    int ylempi = ceil(syöte);


    cout << "syöttämäsi luku " << syöte << " sisältyy välille ( " << alempi << " ja " << ylempi << " )" << endl;

    return 0;
}*/
