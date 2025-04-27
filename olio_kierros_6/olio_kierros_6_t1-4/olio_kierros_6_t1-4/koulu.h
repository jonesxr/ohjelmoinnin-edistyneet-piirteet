#pragma once
#include <string>
#include <vector>
#include "Opiskelija.h"
#include "Opettaja.h"

using namespace std;

class Koulu {
private:
    string koulunNimi;

    vector<Opettaja*> opettajat;

    vector<Opiskelija*> opiskelijat;

public:

    Koulu(const string& nimi);
    ~Koulu(); // purkaja
    void lisaaOpettaja();

    void lisaaOpiskelija();

    void lisaaOpettajalleKurssi();

    void lisaaOpiskelijalleKurssi();

    void tulostaOpettajat() const;

    void tulostaOpiskelijat() const;

    void tulostaKaikkiTiedot() const;
};