#include <iostream>

#include "ksiazka_adresowa.h"

using namespace std;

int main()
{
   KsiazkaAdresowa ksiazkaAdresowa("Uzytkownicy.txt");
   ksiazkaAdresowa.wypiszWszystkichUzytkownikow();
   ksiazkaAdresowa.rejestracjaUzytkownika();
   ksiazkaAdresowa.rejestracjaUzytkownika();
   ksiazkaAdresowa.wypiszWszystkichUzytkownikow();
   return 0;
}
