#include "ksiazka_adresowa.h"

void KsiazkaAdresowa::wybierzOpcjeZMenuGlownego()
{
    char wybor;

    system("cls");
    cout << "    >>> MENU  GLOWNE <<<" << endl;
    cout << "---------------------------" << endl;
    cout << "1. Rejestracja" << endl;
    cout << "2. Logowanie" << endl;
    cout << "9. Koniec programu" << endl;
    cout << "---------------------------" << endl;
    cout << "Twoj wybor: ";

    wybor = MetodyPomocnicze::wczytajZnak();

    if (wybor == '1')
        rejestracjaUzytkownika();
    else if (wybor == '2')
        logowanieUzytkownika();
    else if (wybor == '9')
        exit(0);
    else
        cout<< "Podaj poprawny numer dostepnych opcji."<< endl;

}

void KsiazkaAdresowa::wybierzOpcjeZMenuUzytkownika()
{
    if (czyUzytkownikJestZalogowany())
    {
        char wybor;

        system("cls");
        cout << " >>> MENU UZYTKOWNIKA <<<" << endl;
        cout << "---------------------------" << endl;
        cout << "1. Dodaj adresata" << endl;
        cout << "2. Wyszukaj po imieniu" << endl;
        cout << "3. Wyszukaj po nazwisku" << endl;
        cout << "4. Wyswietl adresatow" << endl;
        cout << "5. Usun adresata" << endl;
        cout << "6. Edytuj adresata" << endl;
        cout << "---------------------------" << endl;
        cout << "7. Zmien haslo" << endl;
        cout << "8. Wyloguj sie" << endl;
        cout << "---------------------------" << endl;
        cout << "Twoj wybor: ";
        wybor = MetodyPomocnicze::wczytajZnak();

        if(wybor == '1')
            dodajAdresata();
        else if(wybor == '2')
            wyszukajAdresatowPoImieniu();
        else if(wybor == '3')
            wyszukajAdresatowPoNazwisku();
        else if(wybor == '4')
            wyswietlWszystkichAdresatowZalogowanegoUzytkownika();
        else if(wybor == '5')
            usunAdresata();
        else if(wybor == '6')
            edytujAdresata();
        else if(wybor == '7')
            zmianaHaslaZalogowanegoUzytkownika();
        else if(wybor == '8')
            wylogowanieUzytkownika();
        else
            cout<< "Podaj poprawny numer dostepnych opcji."<< endl;

    }

    else
    {
        cout << "Aby wyswietlic menu uzytkownika nalezy najpierw sie zalogowac" << endl;
        system("pause");
    }
}



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
        adresatMenedzer = new AdresatMenedzer(nazwaPlikuZAdresatami,pobierzIdZalogowanegoUzytkownika());
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
    if (czyUzytkownikJestZalogowany())
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
    if (czyUzytkownikJestZalogowany())
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
    if (czyUzytkownikJestZalogowany())
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
    if (czyUzytkownikJestZalogowany())
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
    if (czyUzytkownikJestZalogowany())
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
    if (czyUzytkownikJestZalogowany())
    {
        adresatMenedzer->wyszukajAdresatowPoNazwisku();
    }
    else
    {
        cout<< "Aby wyszukiwac adresatow po nazwisku  nalezy najpierw sie zalogowac." <<endl;
        system("pause");
    }
}
