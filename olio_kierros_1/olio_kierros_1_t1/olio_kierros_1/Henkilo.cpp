#include "Henkilo.h"
#include <iostream>

using namespace std;

//muuttujien alustaminen
Henkilo::Henkilo(){
	nimi = "";
	ika = 0;

}

//i�n asettaminen parametrin�
void Henkilo::setIka(int i){
	ika = i;
}

//palautetaan ik�
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
	cout << "Ik�  : "  << ika << endl;
	cout << endl;
	cout << endl;
}

