#include <iostream>

#include "ksiazka_adresowa.h"
#include "UzytkownikMenedzer.h"

using namespace std;

int main()
{
   KsiazkaAdresowa ksiazkaAdresowa("Uzytkownicy.txt");
   ksiazkaAdresowa.logowanieUzytkownika();
   ksiazkaAdresowa.zmianaHaslaZalogowanegoUzytkownika();

   return 0;
}
