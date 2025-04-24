#include "Henkilo.h"
#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "fi-FI");

    // henkilö olio 1 
    Henkilo henkilo1;
    henkilo1.setNimi("Kalle");
    henkilo1.setIka(20);

    // tulostus henkilö 1
    cout << "Henkilö 1 tiedot" << endl;
    henkilo1.tulostaHenkilonTiedot();

    //luodaan kopio henkilö 1
    Henkilo kopio1 = henkilo1;
    cout << "Kopio 1 tiedot" << endl;
    kopio1.tulostaHenkilonTiedot();

    return 0;
}