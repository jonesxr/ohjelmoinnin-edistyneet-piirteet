#include <iostream>
using namespace std;

int main() {
    int numero = 0;     // alustettu muuttuja                       
    int* osoitin = &numero; //osoitin joka osoitta alustettuun numeroon 

    *osoitin = 7;                    

    
    cout << "osoittimen osoite: " << &osoitin << endl;
    cout << "osoittimen arvo: " << *osoitin << endl;

    cout << "numeron osoite:" << &numero << endl;
    cout << "numeron arvo:" << numero << endl;

   
    cout << "kumoamisen testaus numeroon :" << *&numero << endl;
    cout << "kumoamisen testaus osoitteeseen :" << &*osoitin << endl;

   
    cout << "numeron koko :" << sizeof(numero)  << endl;
    cout << "osoittimen koko :" << sizeof(osoitin)  << endl;

    int* osoitin2 = nullptr; 
    cout << "osoitin ja nullptr :" << osoitin2 << endl;
  
  

    return 0;
}