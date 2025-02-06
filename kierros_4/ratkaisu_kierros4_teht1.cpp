
//stack epäonnistui ensimmäisen kerran 10MB koolla (10000000) ensimmäinen yritys 
//stack muistin maks määrä testailun järkeen näyttää olevan 1MB ja joitain kymmeniä / satoja tavuja

//dynaamisen testaus myös 10MB koolla (10000000)
//100MB toimi myös 
//1000MB myös 
// 10 000 MB toimi myös mutta ohjelma tuntui hitaalta
// 29000000000 toimi vielä eli 29GB muistia 
// seurasin tehtävien hallinnasta ram muistin käyttöä ja tällä se oikeastaan oli muiden sovellusten päällä ollessa maksimi
//32Gb ramia siis löytyy
#include <iostream>

using namespace std;

int main() {

    // Stack-muistin varaus 
    char stack_muisti[1000000];  
    cout << "stack onnistui" << endl;

    // Dynaamisen muistin varaus 
    char* heap_muisti = new char[29000000000];
    cout << "dynaaminen onnistui" << endl;

   

    return 0;
}
