#include <iostream>

#include "ksiazka_adresowa.h"
#include "UzytkownikMenedzer.h"

using namespace std;

int main()
{
   KsiazkaAdresowa ksiazkaAdresowa("Uzytkownicy.txt", "Adresaci.txt");

   ksiazkaAdresowa.logowanieUzytkownika();

   ksiazkaAdresowa.wyswietlWszystkichAdresatowZalogowanegoUzytkownika();
    ksiazkaAdresowa.edytujAdresata();

   return 0;
}
