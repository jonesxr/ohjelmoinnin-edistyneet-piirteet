#include "Paivays.h"
#include <iostream>

using namespace std;

void Jokupaiva() {
	cout << "aliohjelmassa sisällä luotu " << endl;
	Paivays jokupva(6, 9, 2025);
	jokupva.tulostaPaivays();
}

int main() {

	//tiivistettynä purkajat toimivat siten, että ne aktivoituvat eli purkavat kun olion scope eli näkyvyys päättyy
	//esimerkiksi main keskellä (ei loopeissa) tehtävät purkautuvat kun ohjelma on läpi 
	//if, while , for silmukoiden sisällä (tai jokaisen iteraatin jälkeen jos useita)
	//aliohjelmassa kun aliohjelma päättyy 
	//new luotu olio voidaan poistaa vain käyttämällä manuaalista delete operaattoria , kuten testattu aikaisemmassa tehtävässä

	setlocale(LC_ALL, "fi-FI");

	Paivays Tanaan(18, 3, 2025);
	Tanaan.tulostaPaivays();
	cout << endl;

	cout << "if silmukan sisällä luotu " << endl;
	if (true) {
		Paivays Tanaanplusyksi(19, 3, 2025);
		Tanaanplusyksi.tulostaPaivays();
	}
	cout << endl;


	cout << "for silmukan sisällä luotu " << endl;
	for (int i = 0; i < 2; i++) {
		Paivays Tanaanpluskaaksi(20, 3, 2025);
		Tanaanpluskaaksi.tulostaPaivays();
	}
	cout << endl;

	//aliohjelmassa luotu
	Jokupaiva();
	cout << endl;
	



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