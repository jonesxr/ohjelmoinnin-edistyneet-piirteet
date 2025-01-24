/*
//jouni suosola
//kierros 2  t1
#include <iostream>
#include <cmath>
using namespace std;

//enum luokka jossa m‰‰ritell‰‰n kaikki kolmion luokat
enum kolmionluokka {tasakylkinen, tasasivuinen, suorakulmainen, epasaannollinen, eikolmio};  

bool mikakolmio(double reuna1, double reuna2, double reuna3, kolmionluokka& tyyppi) {  // &tyyppi palautus enum arvo


	//tarkastukset onko edes kolmio

	//sivu ei voi olla nolla tai pienempi
	if (reuna1 <= 0 or reuna2 <= 0 or reuna3 <= 0) {
		tyyppi = eikolmio;
		return 0;
	}
	//tarkistus onko kolmio mahdollinen matemaattisesti, jos reunat eiv‰t sulje kuviota se ei ole kolmio
	if (reuna1 + reuna2 <= reuna3 or reuna2 + reuna3 <= reuna1 or reuna1 + reuna3 <= reuna2) {
		tyyppi = eikolmio;
		return 0;
	}

	//tarkastellaan mik‰ kolmio syˆtetty on


	//tasasivuinen kolme sivua yht‰ pitk‰t 
	if (reuna1 == reuna2 and reuna2 == reuna3) {
		tyyppi = tasasivuinen;
	}
	//tasakylkinen kaksi sivua ovat yht‰ pitk‰t 
	else if (reuna2 == reuna1 or reuna1 == reuna3 or reuna3 == reuna2) {
		tyyppi = tasakylkinen;
	}

	//vaikein kaikista eli suorakulmainen 
	// suorakulmaisessa p‰tee pytagoraan lause a^2+b^2=c^2 
	// pow potenssi
	else if (pow(reuna1, 2) + pow(reuna2, 2) == pow(reuna3, 2) or
		pow(reuna2, 2) + pow(reuna3, 2) == pow(reuna1, 2) or
		pow(reuna1, 2) + pow(reuna3, 2) == pow(reuna2, 2)) {
		tyyppi = suorakulmainen;
	}
	return 1;
}




int main() {
	

	double reuna1, reuna2, reuna3;
	
	cout << "Anna ensimm‰isen sivun pituus: ";
	cin >> reuna1;
	cout << "Anna toisen sivun pituus: ";
	cin >> reuna2;
	cout << "Anna kolmannen sivun pituus: ";
	cin >> reuna3;

	//enum kolmionluokka  tyyppinen muuttuja "tyyppi" , t‰h‰n laitetaan mihin luokkaan kolmio kuuluu
	kolmionluokka tyyppi;


	if (mikakolmio(reuna1, reuna2, reuna3, tyyppi)) {
		if (tyyppi == tasasivuinen) {
			cout << "Kolmio on tasasivuinen." << endl;
		}
		else if (tyyppi == tasakylkinen) {
			cout << "Kolmio on tasakylkinen." << endl;
		}
		else if (tyyppi == suorakulmainen) {
			cout << "Kolmio on suorakulmainen." << endl;
		}
		else if (tyyppi == epasaannollinen) {
			cout << "Kolmio on ep‰s‰‰nnˆllinen." << endl;
		}
	}
	else {
		cout << "N‰ist‰ sivuista ei voi muodostaa kolmiota!" << endl;
	}

	return 0;
}
*/

