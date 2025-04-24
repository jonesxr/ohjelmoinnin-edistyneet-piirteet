#include "Paivays.h"
#include <iostream>


using namespace std;
//parametrit�n 
Paivays::Paivays() {
	paiva = 0;
	kuukausi = 0;
	vuosi = 0;

	cout << "Paivays luokan parametriton rakentaja" << endl;
}


//parametrillinen
Paivays::Paivays(int p, int k, int v) {
	paiva = p;
	kuukausi = k;
	vuosi = v;

	cout << "Paivays 2 luokan parametrillinen rakentaja" << endl;
}

//purkaja
Paivays::~Paivays() {

	cout << "p�iv�m��r�n  :" << paiva << "." << kuukausi << "." << vuosi << " Purkaja!!" << endl << endl;
}




void Paivays::setPaiva(int p) {
	paiva = p;
}

int Paivays::getPaiva() {
	return paiva;
}


void Paivays::setKuukausi(int p) {
	kuukausi = p;
}

int Paivays::getKuukausi() {
	return kuukausi;
}


void Paivays::setVuosi(int v) {
	vuosi = v;
}

int Paivays::getVuosi() {
	return vuosi;
}

void Paivays::tulostaPaivays() {
	cout << "p�iv�m��r� :" << paiva << "." << kuukausi << "." << vuosi << endl;
}

//lis�tty t3
void Paivays::pvmKysyminen() {
	cout << "anna p�iv�m��r� (1-31) : ";
	cin >> paiva;

	cout << "anna kuukausi (1-12) : ";
	cin >> kuukausi;

	cout << "anna vuosi : ";
	cin >> vuosi;
}


//t3 lis�t��n yksi p�iv� jossa otetaan huomioon kuukauden vaihtuminen ja vuoden vaihtuminen , p�iv�n muutoksen vuoksi
//staattinen taulukko jokaiselle kuukaudelle vuodessa, yritetty pient� lis�yst� t�m� ei ollut vaatimus mielest�ni
const int paivia_per_kuukausi[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

void Paivays::plusyksipaiva() {

	paiva++;

	//-1 koska indeksi alkaa nollasta taulukossa, saadaan luodusta taulukosta max p�iv�t
	int kuukauden_paivat = paivia_per_kuukausi[kuukausi - 1];

	//jos nykyiset paivat ylittyy
	if (paiva > kuukauden_paivat) {
		paiva = 1;

		kuukausi++;


		//jos kuukausi ylittyy
		if (kuukausi > 12) {

			kuukausi = 1;

			vuosi++;

		}

	}

}
