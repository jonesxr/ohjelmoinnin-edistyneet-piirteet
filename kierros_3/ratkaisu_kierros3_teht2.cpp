#include <iostream>
using namespace std;

//t1 kopioitu
void Sekunti_Muunnos(int sekunnit, int& tunnit, int& minuutit, int& paivat, int& ylijaavat_sekunnit) {
	paivat = sekunnit / (24 * 60 * 60);
	//ylijäävät sekunnit päivien jälkeen
	tunnit = (sekunnit % (24 * 60 * 60)) / 3600;
	//tuntien jälkeen
	minuutit = (sekunnit % (60 * 60)) / 60;
	//minuuttien jälkeen
	ylijaavat_sekunnit = sekunnit % 60;
}



void Muunnos_sekunniksi(int &sekunnit,int &tunnit ,int &minuutit,int &paivat,int &ylijaavat_sekunnit) {
	sekunnit = (paivat * 24 * 3600) + (tunnit * 3600) + (minuutit * 60) + ylijaavat_sekunnit;

}






int main() {
	setlocale(LC_ALL, "fi-FI");

	int sekunnit=0, tunnit=0, paivat=0, ylijaavat_sekunnit=0, minuutit=0;

	cout << "Päivät: ";
	cin >> paivat;
	

	cout << "tunnit: ";
	cin >> tunnit;


	cout << "minuutit: ";
	cin >> minuutit;
	

	cout << "sekutit: " ;
	cin >> ylijaavat_sekunnit;
	

	Muunnos_sekunniksi(sekunnit, tunnit, minuutit,paivat, ylijaavat_sekunnit);
	cout << "on sekuntteina :" << sekunnit << endl << endl;;


	//t1 kopioitu 
	Sekunti_Muunnos(sekunnit, tunnit, minuutit, paivat, ylijaavat_sekunnit);
	//tulokset 
	cout << "Tarkistus t1 aliohjelmassa " << endl;
	cout << "Päivät : " << paivat << "  Tunnit : " << tunnit << "  Minuutit : " << minuutit << " Sekunnit : " << ylijaavat_sekunnit;
	cout << endl;
	return 0;
}
