#ifndef ADRESATMENEDZER_H
#define ADRESATMENEDZER_H
#include <iostream>
#include <vector>

#include "Adresat.h"
#include "PlikZAdresatami.h"
#include "UzytkownikMenedzer.h"


using namespace std;

class AdresatMenedzer {

    vector <Adresat> adresaci;
    int idOstatniegoAdresata;
    Adresat podajDaneNowegoAdresata(int idZalogowanegoUzytkownika);
    PlikZAdresatami plikZAdresatami;

public:
    AdresatMenedzer (string nazwaPlikuZAdresatami) : plikZAdresatami (nazwaPlikuZAdresatami) {};
    int dodajAdresata(int idZalogowanegoUzytkownika);
    void wyswietlWszystkichAdresatowZalogowanegoUzytkownika(int idZalogowanegoUzytkownika);
    void wyswietlDaneAdresata(Adresat adresat);
    int wczytajAdresatowZPliku();

};
#endif
