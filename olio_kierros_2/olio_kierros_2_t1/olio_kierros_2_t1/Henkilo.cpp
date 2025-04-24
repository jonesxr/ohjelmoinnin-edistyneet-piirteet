#include "Henkilo.h"
#include <iostream>

using namespace std;

Henkilo::~Henkilo() {

	cout << "Henkilo luokan purkaja " << nimi << " tuhotaan!" << endl << endl;

}


//muuttujien alustaminen Parametritön
Henkilo::Henkilo() {
	nimi = "";
	ika = 0;
	cout << "Henkilo luokan parametritön rakentaja" << endl << endl;
}

//muuttujien alustus Parametrillinen lisätty
Henkilo::Henkilo(string x, int i) {
	nimi = x;
	ika = i;

	cout << "Henkilo luokan 2 parametrillinen rakentaja" << endl << endl;
}


//iän asettaminen parametrinä
void Henkilo::setIka(int i) {
	ika = i;
}

//palautetaan ikä
int Henkilo::getIka() {
	return ika;
}


//asetetaan samalla tavalla nimi
void Henkilo::setNimi(string x) {
	nimi = x;
}

//palautetaan samalla tapaa nimi
string Henkilo::getNimi() {
	return nimi;
}

//tulostukset
void Henkilo::tulostaHenkilonTiedot() {
	cout << "Nimi : " << nimi << endl;
	cout << endl;
	cout << "Ikä  : " << ika << endl;
	cout << endl;
	cout << endl;
}