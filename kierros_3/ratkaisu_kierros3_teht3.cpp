#include <iostream>
using namespace std;

//värikoodit (chat gpt)
#define GRAY_BG "\033[47m"
#define BLACK_TEXT "\033[30m"

//normaali väri 
#define RESET "\033[0m"

//rakenne
struct aika_ty {
	int tunti;
	int minuutti;
	int sekunti;
};




int main() {
	setlocale(LC_ALL, "fi-FI");

	
	aika_ty aika;

	cout << "Anna tunnit : " << GRAY_BG << BLACK_TEXT;
	cin >> aika.tunti;
	cout << RESET;
	if (aika.tunti < 0 or aika.tunti>=24) {
		cout << "väärin annettu tuntimäärä";
		cout << endl;
		return main();
	}

	cout << "Anna minuutit : " << GRAY_BG << BLACK_TEXT;
	cin >> aika.minuutti;
	cout << RESET;
	if (aika.minuutti < 0 or aika.minuutti>=60) {
		cout << "väärin annettu minuutti";
		cout << endl;
		return main();
	}

	cout << "Anna sekunnit : " << GRAY_BG << BLACK_TEXT;
	cin >> aika.sekunti;
	cout << RESET;
	if (aika.sekunti < 0 or aika.sekunti>=60) {
		cout << "väärin annettu sekunti";
		cout << endl;
		return main();
	}

	cout << "Ajanhetkesi on: " << aika.tunti << " tuntia " << aika.minuutti << " minuuttia " << aika.sekunti << " sekunttia " << endl;

	//osoitin_aika on osoitin joka osoittaa aika_ty , joka saa arvon &aika (tämän osoite muistissa)
	aika_ty* osoitin_aika = &aika;

	cout << (* osoitin_aika).tunti << " tuntia ";
	cout << (*osoitin_aika).minuutti << " minuuttia ";
	cout << (*osoitin_aika).sekunti << " sekuntia " << endl;



	//kaksi aikatietuetta joita vertaillaan annetuilla arvoilla
	aika_ty aika2 = { 17, 30, 5 };  
	aika_ty aika3 = aika2; 

	//vertailut uusien tietueiden välilillä , pitäisi kyllä olla samat aina 
	if (aika2.tunti == aika3.tunti and
		aika2.minuutti == aika3.minuutti and
		aika2.sekunti == aika3.sekunti) {
		cout << "aika2 ja aika3 tietueissa samat arvot" << endl;
	}
	else {
		cout << "ei samat sisällöt !!!!" << endl;
	}

	return 0;
}

