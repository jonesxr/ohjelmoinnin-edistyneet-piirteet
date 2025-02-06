#include <iostream>
#include <fstream>

using namespace std;

int main() {
    setlocale(LC_ALL, "fi-FI");

    ifstream random_text("Random.txt"); 

    //ilmoittaa ettei tiedostoon ole käyttöoikeutta tai sitä ei voi avata muusta syystä esim polku väärä (random.txt tilalle koko polku)
    if (!random_text) {
        cout << "tiedoston avaaminen ei onnistunut" << endl;
        return 1;
    }

    int lukumaara = 0;
    double summa = 0.0, numero;

    // Luetaan numerot yksitellen ja kasvatetaan jokaisella luetulla lkm ja summa oikein
    while (random_text >> numero) {

        lukumaara++;
        summa = numero+summa;

    }

    //sulkeminen
    random_text.close(); 

    double keskiarvo = summa / lukumaara;

    cout << "Kaikkien numeroiden summa :  " << summa << endl;
    cout << "Numeroiden määrä : " << lukumaara << endl;
    cout << "Kaikkien numeroiden keskiarvo :" << keskiarvo << endl;
    

    return 0;
}


