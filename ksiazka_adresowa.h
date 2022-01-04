#ifndef KSIAZKAADRESOWA_H
#define KSIAZKAADRESOWA_H
#include <iostream>
#include "UzytkownikMenedzer.h"
#include "AdresatMenedzer.h"


using namespace std;

class KsiazkaAdresowa{

UzytkownikMenedzer uzytkownikMenedzer;
AdresatMenedzer adresatMenedzer;
int idZalogowanegoUzytkownika;

public:
    KsiazkaAdresowa(string nazwaPlikuZUzytkownikami, string nazwaPlikuZAdresatami) : uzytkownikMenedzer (nazwaPlikuZUzytkownikami), adresatMenedzer (nazwaPlikuZAdresatami)
    {
            uzytkownikMenedzer.wczytajUzytkownikowZPliku();
            adresatMenedzer.wczytajAdresatowZPliku();
    };
    void rejestracjaUzytkownika();
    void wypiszWszystkichUzytkownikow();
    int logowanieUzytkownika();
    int wylogowanieUzytkownika();
    void zmianaHaslaZalogowanegoUzytkownika();
    void dodajAdresata();
    void wyswietlWszystkichAdresatowZalogowanegoUzytkownika();

};
#endif
