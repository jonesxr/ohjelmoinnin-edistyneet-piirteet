#include "Paivays.h"
#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "fi-FI");

	Paivays nyt;
	nyt.setPaiva(10);

	nyt.setKuukausi(3);

	nyt.setVuosi(2025);

	Paivays huomenna;

	huomenna.setPaiva(11);

	huomenna.setKuukausi(3);

	huomenna.setVuosi(2025);

	cout << "pvm tänään : ";
	nyt.tulostaPaivays();

	cout << endl;

	cout << "pvm huomenna : ";
	huomenna.tulostaPaivays();

	cout << endl;

	//t3 lisäykset 
	Paivays syote;

	cout << "Anna päivämäärä : ";
    syote.pvmKysyminen();

	cout << endl;

	cout << "Pvm huomenna : ";
	syote.plusyksipaiva();

	syote.tulostaPaivays();

	return 0;
}
