#include "Koulu.h"
#include <iostream>

using namespace std;

Koulu::Koulu(const string& nimi) : koulunNimi(nimi) {}

Koulu::~Koulu() {
    for (Opettaja* opettaja : opettajat) delete opettaja;
    for (Opiskelija* opiskelija : opiskelijat) delete opiskelija;
}

void Koulu::lisaaOpettaja() {
    string nimi, koulutussala;
    int ika;
    cout << "Anna opettajan nimi: ";
    getline(cin, nimi);
    cout << "Anna opettajan ika: ";
    cin >> ika;
    cin.ignore();
    cout << "Anna opettajan koulutussala: ";
    getline(cin, koulutussala);
    opettajat.push_back(new Opettaja(nimi, ika, koulutussala));
}

void Koulu::lisaaOpiskelija() {
    string nimi, opNro;
    int ika, opintopisteet;
    cout << "Anna opiskelijan nimi: ";
    getline(cin, nimi);
    cout << "Anna opiskelijan ika: ";
    cin >> ika;
    cin.ignore();
    cout << "Anna opiskelijan opiskelijanumero: ";
    getline(cin, opNro);
    cout << "Anna opiskelijan opintopisteet: ";
    cin >> opintopisteet;
    cin.ignore();
    opiskelijat.push_back(new Opiskelija(nimi, ika, opNro, opintopisteet));
}

void Koulu::lisaaOpettajalleKurssi() {
    string koulutussala, kurssi;
    cout << "Anna opettajan koulutussala: ";
    getline(cin, koulutussala);
    cout << "Anna kurssin nimi: ";
    getline(cin, kurssi);
    for (Opettaja* opettaja : opettajat) {
        if (opettaja->getKoulutussala() == koulutussala) {
            opettaja->lisaaKurssi(kurssi);
            cout << "Kurssi lisatty opettajalle.\n";
            return;
        }
    }
    cout << "Opettajaa ei loydy.\n";
}

void Koulu::lisaaOpiskelijalleKurssi() {
    string opNro, kurssi;
    cout << "Anna opiskelijan opiskelijanumero: ";
    getline(cin, opNro);
    cout << "Anna kurssin nimi: ";
    getline(cin, kurssi);
    for (Opiskelija* opiskelija : opiskelijat) {
        if (opiskelija->getOpNro() == opNro) {
            opiskelija->lisaaKurssi(kurssi);
            cout << "Kurssi lisatty opiskelijalle.\n";
            return;
        }
    }
    cout << "Opiskelijaa ei loydy.\n";
}

void Koulu::tulostaOpettajat() const {
    if (opettajat.empty()) {
        cout << "Ei opettajia.\n";
        return;
    }
    for (const Opettaja* opettaja : opettajat) {
        opettaja->tulostaTiedot();
    }
}

void Koulu::tulostaOpiskelijat() const {
    if (opiskelijat.empty()) {
        cout << "Ei opiskelijoita.\n";
        return;
    }
    for (const Opiskelija* opiskelija : opiskelijat) {
        opiskelija->tulostaTiedot();
    }
}

void Koulu::tulostaKaikkiTiedot() const {
    cout << "Koulu: " << koulunNimi << "\n";
    cout << "Opettajia: " << opettajat.size() << "\n";
    cout << "Opiskelijoita: " << opiskelijat.size() << "\n";
    cout << "Opettajien tiedot:\n";
    tulostaOpettajat();
    cout << "Opiskelijoiden tiedot:\n";
    tulostaOpiskelijat();
}