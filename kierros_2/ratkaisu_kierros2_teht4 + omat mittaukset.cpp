//jouni suosola
//kierros 2  t4

#include <iostream>
#include <cmath>
#include <chrono> 
using namespace std;
using namespace chrono;

// a kohta!!!!!!!!!!  ja käytössä myös koko tehtävän isprime_all 
//voidaan jakaa vain itsellään ja 1    2,3,5,7 ; suurempia kuin 1 
bool isprime(int number) {
	//onko pienempi kuin 2 
	if (number < 2) 
		return 0;
	

	for (int a = 2; a * a <= number; a++) {
		//tarkastetaan jääkö numeron kahdella jakamisesta mitään "yli"
		if (number % a == 0) {
			return 0;
		}
	}
	



	return 1;
}


/*
//b kohta !!!!!!!
int main() {
	setlocale(LC_ALL, "fi-FI");

	//yläraja
	const int paaluvut = 10000;
	//aloitus 
	int aloitusluku = 0;

		cout << "Alkuluvut välillä 1-" << paaluvut << endl;

		for (int r = 1; r < paaluvut; r++) {
			if (isprime(r)) {
				cout << r << " , ";
				aloitusluku++;
			}
		}
		cout << endl << endl;
		cout << "alkulujen määrä :  " << aloitusluku << endl;
		cout << "alkulukujen määrä prosentteina :  " << aloitusluku * 100.0 / paaluvut << " %";


}
*/

//opimaalisempi kuin isprime  tuplasti vähemmän tarkistusta
bool isprime_half(int number) {
	//onko suurempi pienempi 2 
	if (number < 2)
		return 0;


	for (int a = 2; a <= number / 2; a++) {
		//tarkistus luvuille 2,3 ja  paaluvut/2
		if (number % a == 0) {
			return 0;
		}
	}




	return 1;
}

//optimaalisin koska neliöjuuri luku on vähiten tarkistettavaa
bool isprime_square(int number) {
	//onko suurempi pienempi 2 
	if (number < 2)
		return 0;


	for (int a = 2; a <= sqrt(number); a++) {
		//
		if (number % a == 0) {
			return 0;
		}
	}




	return 1;
}





int main() {
	setlocale(LC_ALL, "fi-FI");

	//yläraja
	const int paaluvut = 10000;
	//aloitus 
	int aloitusluku = 0, aloitusluku2 = 0, aloitusluku3 = 0;

	cout << "Alkuluvut välillä 1-" << paaluvut << endl;


	// pikku testailut kauanko oikeasti näilä on eroa
	auto start = high_resolution_clock::now();



	for (int r = 1; r < paaluvut; r++) {
		if (isprime(r)) {
			aloitusluku++;
		}
	}

	//testi ei liity tehtävään
	auto stop = high_resolution_clock::now();
	auto duration = duration_cast<microseconds>(stop - start);  
	start = high_resolution_clock::now();
	//testi ei liity tehtävään




	

	for (int t = 1; t < paaluvut; t++) {
		if (isprime_half(t)) {
			aloitusluku2++;
		}
	}

	//testi ei liity tehtävään
	stop = high_resolution_clock::now();
	auto duration1 = duration_cast<microseconds>(stop - start);
	start = high_resolution_clock::now();
	//testi ei liity tehtävään




	for (int y = 1; y < paaluvut;y++) {
		if (isprime_square(y)) {
			aloitusluku3++;
		}
	}




	//testi ei liity tehtävään
	stop = high_resolution_clock::now();
	auto duration2 = duration_cast<microseconds>(stop - start);
	//testi ei liity tehtävään




	//testi ei liity tehtävään
	cout << "isprime meni aika: " << duration.count() << " mikro s" << endl;
	cout << "isprime:_half meni aika: " << duration1.count() << " mikro s" << endl;
	cout << "isprime_square meni aika: " << duration2.count() << " mikro s" << endl;
	//testi ei liity tehtävään





	cout << endl << endl;
	cout << "alkulujen määrä isprimeall (isprime):  " << aloitusluku << endl;
	cout << "alkulujen määrä isprime_half (isprime_half):  " << aloitusluku2 << endl;
	cout << "alkulujen määrä isprime_square (isprime_square):  " << aloitusluku3 << endl;
	

	




}
