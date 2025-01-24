//jouni suosola
//kierros 2  t4

#include <iostream>
#include <cmath>
#include <chrono> 
using namespace std;
using namespace chrono;

// a kohta!!!!!!!!!!  ja k�yt�ss� my�s koko teht�v�n isprime_all 
//voidaan jakaa vain itsell��n ja 1    2,3,5,7 ; suurempia kuin 1 
bool isprime(int number) {
	//onko pienempi kuin 2 
	if (number < 2) 
		return 0;
	

	for (int a = 2; a * a <= number; a++) {
		//tarkastetaan j��k� numeron kahdella jakamisesta mit��n "yli"
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

	//yl�raja
	const int paaluvut = 10000;
	//aloitus 
	int aloitusluku = 0;

		cout << "Alkuluvut v�lill� 1-" << paaluvut << endl;

		for (int r = 1; r < paaluvut; r++) {
			if (isprime(r)) {
				cout << r << " , ";
				aloitusluku++;
			}
		}
		cout << endl << endl;
		cout << "alkulujen m��r� :  " << aloitusluku << endl;
		cout << "alkulukujen m��r� prosentteina :  " << aloitusluku * 100.0 / paaluvut << " %";


}
*/

//opimaalisempi kuin isprime  tuplasti v�hemm�n tarkistusta
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

//optimaalisin koska neli�juuri luku on v�hiten tarkistettavaa
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

	//yl�raja
	const int paaluvut = 10000;
	//aloitus 
	int aloitusluku = 0, aloitusluku2 = 0, aloitusluku3 = 0;

	cout << "Alkuluvut v�lill� 1-" << paaluvut << endl;


	// pikku testailut kauanko oikeasti n�il� on eroa
	auto start = high_resolution_clock::now();



	for (int r = 1; r < paaluvut; r++) {
		if (isprime(r)) {
			aloitusluku++;
		}
	}

	//testi ei liity teht�v��n
	auto stop = high_resolution_clock::now();
	auto duration = duration_cast<microseconds>(stop - start);  
	start = high_resolution_clock::now();
	//testi ei liity teht�v��n




	

	for (int t = 1; t < paaluvut; t++) {
		if (isprime_half(t)) {
			aloitusluku2++;
		}
	}

	//testi ei liity teht�v��n
	stop = high_resolution_clock::now();
	auto duration1 = duration_cast<microseconds>(stop - start);
	start = high_resolution_clock::now();
	//testi ei liity teht�v��n




	for (int y = 1; y < paaluvut;y++) {
		if (isprime_square(y)) {
			aloitusluku3++;
		}
	}




	//testi ei liity teht�v��n
	stop = high_resolution_clock::now();
	auto duration2 = duration_cast<microseconds>(stop - start);
	//testi ei liity teht�v��n




	//testi ei liity teht�v��n
	cout << "isprime meni aika: " << duration.count() << " mikro s" << endl;
	cout << "isprime:_half meni aika: " << duration1.count() << " mikro s" << endl;
	cout << "isprime_square meni aika: " << duration2.count() << " mikro s" << endl;
	//testi ei liity teht�v��n





	cout << endl << endl;
	cout << "alkulujen m��r� isprimeall (isprime):  " << aloitusluku << endl;
	cout << "alkulujen m��r� isprime_half (isprime_half):  " << aloitusluku2 << endl;
	cout << "alkulujen m��r� isprime_square (isprime_square):  " << aloitusluku3 << endl;
	

	




}
