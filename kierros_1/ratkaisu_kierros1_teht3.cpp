#include <iostream>
using namespace std;




int kasvatus(int nollataulukko[10]) {
	for (int j = 0; j < 10; j++) {
		nollataulukko[j] = 1;
	}
	return 0;

}


int kasvatus2(int* nollataulukko2) {
	for (int j = 0; j < 10; j++) {
		*(nollataulukko2+j) = 1;
	}
	return 0;

}


int main() {
	int nollataulukko[10] = { 0 };
	cout << "taulukon arvot ennen aliohjelmaa1:  ";

	for (int f = 0; f < 10;  f++) {
		cout << nollataulukko[f] << " , ";
	}

	cout << endl;

	kasvatus(nollataulukko);

	cout << "taulukon arvot aliohjelman1 jalkeen:  ";
	for (int f = 0; f < 10; f++) {
		cout << nollataulukko[f] << " , ";
	}

	cout << endl;

	
	int nollataulukko2[10] = { 0 };
	
	cout << "taulukon arvot ennen aliohjelmaa2:  ";

	for (int f = 0; f < 10; f++) {
		cout << nollataulukko2[f] << " , ";
	}

	cout << endl;

	kasvatus2(nollataulukko2);

	cout << "taulukon arvon aliohjelman2 jalkeen:  ";
	for (int f = 0; f < 10; f++) {
		cout << nollataulukko2[f] << " , ";
	}

	cout << endl;
	return 0;
}


