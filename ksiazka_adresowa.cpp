#include "ksiazka_adresowa.h"


void KsiazkaAdresowa::rejestracjaUzytkownika()
{

    uzytkownikMenedzer.rejestracjaUzytkownika();

}

void KsiazkaAdresowa::wypiszWszystkichUzytkownikow()
{

    uzytkownikMenedzer.wypiszWszystkichUzytkownikow();
}

void KsiazkaAdresowa::logowanieUzytkownika()
{

    uzytkownikMenedzer.logowanieUzytkownika();
    if (uzytkownikMenedzer.czyUzytkownikJestZalogowany())
    {
        adresatMenedzer = new AdresatMenedzer(NAZWA_PLIKU_Z_ADRESATAMI,pobierzIdZalogowanegoUzytkownika());
    }

}

void KsiazkaAdresowa::wylogowanieUzytkownika()
{
    uzytkownikMenedzer.wylogowanieUzytkownika();
    delete adresatMenedzer;
    adresatMenedzer = NULL;
}

void KsiazkaAdresowa::zmianaHaslaZalogowanegoUzytkownika()
{
    uzytkownikMenedzer.zmianaHaslaZalogowanegoUzytkownika();
}

void KsiazkaAdresowa::dodajAdresata()
{
    if (uzytkownikMenedzer.czyUzytkownikJestZalogowany())
    {
        adresatMenedzer->dodajAdresata();
    }
    else
    {
        cout<< "Aby dodac adresata nalezy najpierw sie zalogowac." <<endl;
        system("pause");
    }
}

void KsiazkaAdresowa::wyswietlWszystkichAdresatowZalogowanegoUzytkownika()
{
    if (uzytkownikMenedzer.czyUzytkownikJestZalogowany())
    {
        adresatMenedzer->wyswietlWszystkichAdresatow();
    }
    else
    {
        cout<< "Aby wyswietlic adresatow nalezy najpierw sie zalogowac." <<endl;
        system("pause");
    }

}

bool KsiazkaAdresowa::czyUzytkownikJestZalogowany()
{
    return (uzytkownikMenedzer.pobierzIdZalogowanegoUzytkownika() > 0);
}

int KsiazkaAdresowa::pobierzIdZalogowanegoUzytkownika()
{
    uzytkownikMenedzer.pobierzIdZalogowanegoUzytkownika();
}

void KsiazkaAdresowa::usunAdresata()
{
    if (uzytkownikMenedzer.czyUzytkownikJestZalogowany())
    {
        adresatMenedzer->usunAdresata();
    }
    else
    {
        cout<< "Aby usunac adresata nalezy najpierw sie zalogowac." <<endl;
        system("pause");
    }
}

void KsiazkaAdresowa::edytujAdresata()
{
    if (uzytkownikMenedzer.czyUzytkownikJestZalogowany())
    {
        adresatMenedzer->edytujAdresata();
    }
    else
    {
        cout<< "Aby edytowac adresata nalezy najpierw sie zalogowac." <<endl;
        system("pause");
    }
}

void KsiazkaAdresowa::wyszukajAdresatowPoImieniu()
{
    if (uzytkownikMenedzer.czyUzytkownikJestZalogowany())
    {
        adresatMenedzer->wyszukajAdresatowPoImieniu();
    }
    else
    {
        cout<< "Aby wyszukiwac adresatow po imieniu nalezy najpierw sie zalogowac." <<endl;
        system("pause");
    }
}

void KsiazkaAdresowa::wyszukajAdresatowPoNazwisku()
{
    if (uzytkownikMenedzer.czyUzytkownikJestZalogowany())
    {
        adresatMenedzer->wyszukajAdresatowPoNazwisku();
    }
    else
    {
        cout<< "Aby wyszukiwac adresatow po nazwisku  nalezy najpierw sie zalogowac." <<endl;
        system("pause");
    }
}
