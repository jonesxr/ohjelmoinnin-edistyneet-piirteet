#include "Henkilo.h"
#include <iostream>

using namespace std;

//muuttujien alustaminen
Henkilo::Henkilo(){
	nimi = "";
	ika = 0;

}

//iän asettaminen parametrinä
void Henkilo::setIka(int i){
	ika = i;
}

//palautetaan ikä
int Henkilo::getIka(){
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
	cout << "Nimi : " <<  nimi <<  endl;
	cout << endl;
	cout << "Ikä  : "  << ika << endl;
	cout << endl;
	cout << endl;
}

