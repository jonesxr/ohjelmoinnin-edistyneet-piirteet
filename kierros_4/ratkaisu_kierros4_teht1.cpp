
//stack ep�onnistui ensimm�isen kerran 10MB koolla (10000000) ensimm�inen yritys 
//stack muistin maks m��r� testailun j�rkeen n�ytt�� olevan 1MB ja joitain kymmeni� / satoja tavuja

//dynaamisen testaus my�s 10MB koolla (10000000)
//100MB toimi my�s 
//1000MB my�s 
// 10 000 MB toimi my�s mutta ohjelma tuntui hitaalta
// 29000000000 toimi viel� eli 29GB muistia 
// seurasin teht�vien hallinnasta ram muistin k�ytt�� ja t�ll� se oikeastaan oli muiden sovellusten p��ll� ollessa maksimi
//32Gb ramia siis l�ytyy
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
