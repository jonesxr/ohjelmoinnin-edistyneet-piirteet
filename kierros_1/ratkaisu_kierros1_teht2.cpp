#include <iostream>
using namespace std;



//viittaus
int swap(int& numero1, int& numero2) {
	int osoitin = numero1;
	numero1 = numero2;
	numero2 = osoitin;
	return 0;

}

//osoite
int swap2(int* numero1, int* numero2) {
	int osoitin = *numero1;
	*numero1 = *numero2;
	*numero2 = osoitin;

	return 0;
}


int main() {
	//k‰ytet‰‰n esimerkin sijasta vain yht‰ numeroparia
	int numero1 = 10, numero2 = 20;
	cout << "numerot ennen swappia " << "nr1 : " << numero1 << ", nr2 : " << numero2 << endl;

	swap(numero1, numero2); //muutetaan numerot ensin toisinp‰in 
	cout << "numerot ensimmaisen swapin jalkeen " << "nr1 : " << numero1 << ", nr2 : " << numero2 << endl;

	swap2(&numero1, &numero2); //k‰‰nnet‰‰n numerot takaisin alkuper‰iseksi
	cout << "numerot toisen swapin jalkeen " << "nr1 : " << numero1 << ", nr2 : " << numero2 << endl;
	return 0;
}



