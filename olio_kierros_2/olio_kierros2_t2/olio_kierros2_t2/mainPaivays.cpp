#include "Paivays.h"
#include <iostream>

using namespace std;

void Jokupaiva() {
	cout << "aliohjelmassa sis�ll� luotu " << endl;
	Paivays jokupva(6, 9, 2025);
	jokupva.tulostaPaivays();
}

int main() {

	//tiivistettyn� purkajat toimivat siten, ett� ne aktivoituvat eli purkavat kun olion scope eli n�kyvyys p��ttyy
	//esimerkiksi main keskell� (ei loopeissa) teht�v�t purkautuvat kun ohjelma on l�pi 
	//if, while , for silmukoiden sis�ll� (tai jokaisen iteraatin j�lkeen jos useita)
	//aliohjelmassa kun aliohjelma p��ttyy 
	//new luotu olio voidaan poistaa vain k�ytt�m�ll� manuaalista delete operaattoria , kuten testattu aikaisemmassa teht�v�ss�

	setlocale(LC_ALL, "fi-FI");

	Paivays Tanaan(18, 3, 2025);
	Tanaan.tulostaPaivays();
	cout << endl;

	cout << "if silmukan sis�ll� luotu " << endl;
	if (true) {
		Paivays Tanaanplusyksi(19, 3, 2025);
		Tanaanplusyksi.tulostaPaivays();
	}
	cout << endl;


	cout << "for silmukan sis�ll� luotu " << endl;
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

	cout << "pvm t�n��n : ";
	nyt.tulostaPaivays();

	cout << endl;

	cout << "pvm huomenna : ";
	huomenna.tulostaPaivays();

	cout << endl;

	//t3 lis�ykset 
	Paivays syote;

	cout << "Anna p�iv�m��r� : ";
	syote.pvmKysyminen();

	cout << endl;

	cout << "Pvm huomenna : ";
	syote.plusyksipaiva();

	syote.tulostaPaivays();

	return 0;
}