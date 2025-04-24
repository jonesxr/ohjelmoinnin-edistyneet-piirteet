#include "Noppa.h"
#include <iostream>
#include <cstdlib>  //randi
#include <ctime>   //randi alustus

using namespace std;

int main() {

    setlocale(LC_ALL, "fi-FI");
    //alustus
    srand(time(NULL));

    //olio
    Noppa noppa;

    // ensimmäinen luku alustuksesta
    cout << "nopan alustus lukema" << endl;
    noppa.kerroViimeisenHeitonLukema();

    cout << endl;

    //parit heitot
    cout << "Heitetään noppaa 5 kertaa:" << endl;
    for (int i = 0; i < 5; i++) {
        noppa.heitaNoppaa();
        noppa.kerroViimeisenHeitonLukema();
        
    }

    // Testataan getViimeisinLukema()
    cout << "viimeisin luku: " << noppa.getViimeisinLukema() << endl;
    

    return 0;

}