#include "AdresatMenedzer.h"

int AdresatMenedzer::dodajAdresata(int idZalogowanegoUzytkownika)
{
    Adresat adresat;

    system("cls");
    cout << " >>> DODAWANIE NOWEGO ADRESATA <<<" << endl << endl;
    adresat = podajDaneNowegoAdresata(idZalogowanegoUzytkownika);

    adresaci.push_back(adresat);
    plikZAdresatami.dopiszAdresataDoPliku(adresat);

    return ++idOstatniegoAdresata;
}

Adresat AdresatMenedzer::podajDaneNowegoAdresata(int idZalogowanegoUzytkownika)
{
    Adresat adresat;

    adresat.id = ++idOstatniegoAdresata;
    adresat.idUzytkownika = idZalogowanegoUzytkownika;

    cout << "Podaj imie: ";
    adresat.imie = MetodyPomocnicze::wczytajLinie();
    adresat.imie = MetodyPomocnicze::zamienPierwszaLitereNaDuzaAPozostaleNaMale(adresat.imie);

    cout << "Podaj nazwisko: ";
    adresat.nazwisko = MetodyPomocnicze::wczytajLinie();
    adresat.nazwisko = MetodyPomocnicze::zamienPierwszaLitereNaDuzaAPozostaleNaMale(adresat.nazwisko);

    cout << "Podaj numer telefonu: ";
    adresat.numerTelefonu = MetodyPomocnicze::wczytajLinie();

    cout << "Podaj email: ";
    adresat.email = MetodyPomocnicze::wczytajLinie();

    cout << "Podaj adres: ";
    adresat.adres = MetodyPomocnicze::wczytajLinie();

    return adresat;
}

void AdresatMenedzer::wyswietlWszystkichAdresatowZalogowanegoUzytkownika(int idZalogowanegoUzytkownika)
{

    system("cls");
    if (!adresaci.empty())
    {
        cout << "             >>> ADRESACI <<<" << endl;
        cout << "-----------------------------------------------" << endl;
        for (int i =0; i<adresaci.size(); i++)
        {

            if (adresaci[i].idUzytkownika = idZalogowanegoUzytkownika)
            {
                wyswietlDaneAdresata(adresaci[i]);
                cout << endl;
            }
            else continue;
        }
    }
        else
        {
            cout << endl << "Ksiazka adresowa jest pusta." << endl << endl;
        }
        system("pause");
    }

    void AdresatMenedzer::wyswietlDaneAdresata(Adresat adresat)
    {
        cout << endl << "Id:                 " << adresat.id << endl;
        cout << "Imie:               " << adresat.imie << endl;
        cout << "Nazwisko:           " << adresat.nazwisko << endl;
        cout << "Numer telefonu:     " << adresat.numerTelefonu << endl;
        cout << "Email:              " << adresat.email << endl;
        cout << "Adres:              " << adresat.adres << endl;
    }

    int AdresatMenedzer::wczytajAdresatowZPliku()
    {
        idOstatniegoAdresata = plikZAdresatami.wczytajAdresatowZPliku(adresaci);
    }
