/*
//jouni suosola 
//kierros 2  t3
#include <iostream>
using namespace std;

// palauttaa pienemmän kahesta ensimmäisestä
int pienin(int eka, int toka) {
    if (eka > toka) {
        return toka;
    }
    else {
        return eka;
    }


}

// palauttaa pienemmän kolmesta ensimmäisestä
//ottaa ensin kahdesta ensimmäisestä pienemmän ja vertaa sitä kolmanteen
int pienin(int eka, int toka, int kolmas) {
    return pienin(pienin(eka, toka), kolmas);
}

//ottaa kolmesta ensimmäisestä pienimmän ylemmän ohjelman avulla ja vertaa sitä neljanteen
int pienin(int eka, int toka, int kolmas, int neljas) {
    return pienin(pienin(eka, toka, kolmas), neljas);
}

int main() {

    setlocale(LC_ALL, "fi-FI");

    int eka, toka, kolmas, neljas;

    
    cout << "Anna neljä kokonaislukua: ";
    cin >> eka >> toka >> kolmas >> neljas;
    cout << endl;
   //pienin parametri testaukset 
    cout << "pienin 2 parametrinen: " << endl;
    cout << pienin(eka, toka) << endl;
    cout << "pienin 3 parametrinen: " << endl;
    cout <<  pienin(eka, toka, kolmas) << endl;
    cout << "pienin 4 parametrinen : " << endl;
    cout << pienin(eka, toka, kolmas, neljas) << endl;

    return 0;
}
*/