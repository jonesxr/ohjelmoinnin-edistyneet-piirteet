#include <iostream>
using namespace std;

struct aika_ty {
    int tunti;
    int minuutti;
    int sekuntti;
};

// Funktio, joka muuntaa ajan sekunneiksi
int aika_sekunneiksi(aika_ty aika) {
    return aika.tunti * 3600 + aika.minuutti * 60 + aika.sekuntti;
}

// teht 2 otettu 
void Sekunti_Muunnos(int sekuntti, int& tunnit, int& minuutit, int& ylijaavat_sekunnit) {
    tunnit = (sekuntti % (24 * 60 * 60)) / 3600;  //tunnit
    minuutit = (sekuntti % (60 * 60)) / 60;  //minuutit
    ylijaavat_sekunnit = sekuntti % 60;  //sekunnit
}

// Lasketaan aikojen erotus sekunneissa
int aikojen_erotus(aika_ty aika1, aika_ty aika2) {

    //muutetaan sekunneiksi kummatkit ajat 
    int sekunnit1 = aika_sekunneiksi(aika1);  
    int sekunnit2 = aika_sekunneiksi(aika2);  

    //erotus sekuntteina
    return sekunnit1 - sekunnit2; 
}

int main() {
    setlocale(LC_ALL, "fi-FI");

    aika_ty aika1, aika2;

    // eka aika
    cout << "Ensimmäisestä ajasta tullaan vähentämään toinen aika" << endl;
    cout << "Ensimmäinen aika:" << endl;
    cout << "Tunnit: ";
    cin >> aika1.tunti;
    cout << "Minuutit: ";
    cin >> aika1.minuutti;
    cout << "Sekunnit: ";
    cin >> aika1.sekuntti;

    //toinen aika
    cout << "Toinen aika:" << endl;
    cout << "Tunnit: ";
    cin >> aika2.tunti;
    cout << "Minuutit: ";
    cin >> aika2.minuutti;
    cout << "Sekunnit: ";
    cin >> aika2.sekuntti;

    // Lasketaan aikojen erotus sekunneissa
    int eroaika = aikojen_erotus(aika1, aika2);

    // Muutetaan erotus ajaksi
    int tunnit, minuutit, ylijaavat_sekunnit;
    Sekunti_Muunnos(eroaika, tunnit, minuutit, ylijaavat_sekunnit);

    // aikojen erot 
    cout << "näiden aikojen ero on " << endl;
    cout << tunnit << " tuntia " << endl;
    cout << minuutit << " minuuttia " << endl;
    cout  << ylijaavat_sekunnit << " sekuntia." << endl;

    return 0;
}