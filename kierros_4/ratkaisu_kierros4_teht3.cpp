#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    string nimi, oma_kuvaus;

    //nimi
    cout << "anna nimi : ";
    //luetaan ja tallennetaan muuttujaan
    getline(cin, nimi);

    //kuvaus
    cout << "kerro jotain :";
    //luetaan ja tallennetaan muuttujaan
    getline(cin, oma_kuvaus);

    //muokkaa tiedostoa tai tekee uuden jos sitä ei ole 
    ofstream htmlFile("htmlsivu.html");

  

    //html osuus

 htmlFile << "<html>\n";
 htmlFile << "<head>\n</head>\n";
 htmlFile << "<body>\n";
 htmlFile << "<center>\n";
 htmlFile << "<h1>" << nimi << "</h1>\n";
 htmlFile << "</center>\n";
 htmlFile << "<p>" << oma_kuvaus << "</p>\n";
 htmlFile << "</body>\n";
 htmlFile << "</html>\n";


    // sulkeminen
    htmlFile.close();

    cout << "html filu luotu" << endl;

    return 0;
}


