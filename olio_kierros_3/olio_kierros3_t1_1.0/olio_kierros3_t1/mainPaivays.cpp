#include "Paivays.h"
#include <iostream>

using namespace std;

int main() {

    //k‰ytet‰‰n 1 viikkoteht‰v‰n teht‰v‰ 2 koodia

    setlocale(LC_ALL, "fi-FI");

    Paivays nyt;
    nyt.setPaiva(10);
    nyt.setKuukausi(3);
    nyt.setVuosi(2025);

    Paivays huomenna;
    huomenna.setPaiva(11);
    huomenna.setKuukausi(3);
    huomenna.setVuosi(2025);

    cout << "pvm t‰n‰‰n : ";
    nyt.tulostaPaivays();

    cout << endl;

    cout << "pvm huomenna : ";
    huomenna.tulostaPaivays();

    return 0;
}