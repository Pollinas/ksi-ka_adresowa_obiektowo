#include <iostream>

#include "ksiazka_adresowa.h"
#include "UzytkownikMenedzer.h"

using namespace std;

int main()
{
   KsiazkaAdresowa ksiazkaAdresowa("Uzytkownicy.txt", "Adresaci.txt");
   //ksiazkaAdresowa.rejestracjaUzytkownika();
   ksiazkaAdresowa.logowanieUzytkownika();
   //ksiazkaAdresowa.zmianaHaslaZalogowanegoUzytkownika();
   ksiazkaAdresowa.dodajAdresata();
   //ksiazkaAdresowa.dodajAdresata();

   ksiazkaAdresowa.wyswietlWszystkichAdresatowZalogowanegoUzytkownika();

   return 0;
}
