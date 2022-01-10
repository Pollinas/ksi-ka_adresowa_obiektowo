#include <iostream>

#include "ksiazka_adresowa.h"
#include "UzytkownikMenedzer.h"


using namespace std;

int main()
{
   KsiazkaAdresowa ksiazkaAdresowa("Uzytkownicy.txt", "Adresaci.txt");
   ksiazkaAdresowa.wybierzOpcjeZMenuGlownego();

   return 0;
}
