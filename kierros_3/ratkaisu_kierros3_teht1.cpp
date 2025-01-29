
#include <iostream>
using namespace std;

void Sekunti_Muunnos(int sekunnit,int& tunnit ,int& minuutit,int& paivat,int &ylijaavat_sekunnit) {
	paivat = sekunnit / (24 * 60 * 60);
	//ylijäävät sekunnit päivien jälkeen
	tunnit = (sekunnit % (24  * 60 * 60)) / 3600;
	//tuntien jälkeen
	minuutit = (sekunnit %  (60 * 60)) / 60;
	//minuuttien jälkeen
	ylijaavat_sekunnit = sekunnit % 60;


	

}


int main() {
	setlocale(LC_ALL, "fi-FI");

	int sekunnit=0, tunnit=0, paivat=0, ylijaavat_sekunnit=0, minuutit=0;

	cout << "Anna sekunnit: ";
	cin >> sekunnit;
	
	Sekunti_Muunnos(sekunnit, tunnit, minuutit, paivat, ylijaavat_sekunnit);


	//tulokset 
	cout << "Päivät : " << paivat << "  Tunnit : " << tunnit << "  Minuutit : " << minuutit << " Sekunnit : " << ylijaavat_sekunnit;

	return 0;
}
