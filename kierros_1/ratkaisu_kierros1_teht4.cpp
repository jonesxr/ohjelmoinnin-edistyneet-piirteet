
#include <iostream>
using namespace std;




//osoite
int swap2(int* taulukko) {
	int* min = taulukko; //ensimmäinen taulukon alkio
	int* max = taulukko + 9; //viimeinen taulukon alkio

	for (int a = 0; a < 5; a++) {
		int osoitin = *min; //ensimmäinen alkion osoite osoittimeen
		*min = *max;        //isoimman arvon osoite pienimmän osoitteeseen
		*max = osoitin;     //isoimpaan arvo osoittimesta

		min++; //seuraava
		max--; //edellinen
	}

	return 0;
}




int main() {
	int taulukko[10];

	for (int f = 0; f < 10; f++) {
		taulukko[f] = f + 1;
	}

	cout << "taulukon arvot ennen aliohjelmaa:  ";

	for (int f = 0; f < 10; f++) {
		cout << taulukko[f] << " , ";
	}

	cout << endl;

	swap2(taulukko);

	cout << "taulukon arvot aliohjelman jalkeen:  ";
	for (int f = 0; f < 10; f++) {
		cout << taulukko[f] << " , ";
	}

	cout << endl;


	return 0;
}