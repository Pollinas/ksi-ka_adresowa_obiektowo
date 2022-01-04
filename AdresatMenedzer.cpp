#include "AdresatMenedzer.h"

int AdresatMenedzer::dodajAdresata(int idZalogowanegoUzytkownika)
{
    Adresat adresat;

    system("cls");
    cout << " >>> DODAWANIE NOWEGO ADRESATA <<<" << endl << endl;
    adresat = podajDaneNowegoAdresata(idZalogowanegoUzytkownika);

    adresaci.push_back(adresat);
    plikZAdresatami.dopiszAdresataDoPliku(adresat);

    return idOstatniegoAdresata;
}

Adresat AdresatMenedzer::podajDaneNowegoAdresata(int idZalogowanegoUzytkownika)
{
    Adresat adresat;

    adresat.ustawId(++idOstatniegoAdresata);
    adresat.ustawIdUzytkownika(idZalogowanegoUzytkownika);

    cout << "Podaj imie: ";
    adresat.ustawImie(MetodyPomocnicze::wczytajLinie());

    cout << "Podaj nazwisko: ";
    adresat.ustawNazwisko(MetodyPomocnicze::wczytajLinie());

    cout << "Podaj numer telefonu: ";
    adresat.ustawNumerTelefonu(MetodyPomocnicze::wczytajLinie());

    cout << "Podaj email: ";
    adresat.ustawEmail(MetodyPomocnicze::wczytajLinie());

    cout << "Podaj adres: ";
    adresat.ustawAdres(MetodyPomocnicze::wczytajLinie());

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

            if (adresaci[i].pobierzIdUzytkownika() == idZalogowanegoUzytkownika)
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
        cout << endl << "Id:                 " << adresat.pobierzId() << endl;
        cout << "Imie:               " << adresat.pobierzImie() << endl;
        cout << "Nazwisko:           " << adresat.pobierzNazwisko() << endl;
        cout << "Numer telefonu:     " << adresat.pobierzNumerTelefonu() << endl;
        cout << "Email:              " << adresat.pobierzEmail() << endl;
        cout << "Adres:              " << adresat.pobierzAdres() << endl;
    }

    int AdresatMenedzer::wczytajAdresatowZPliku()
    {
        idOstatniegoAdresata = plikZAdresatami.wczytajAdresatowZPliku(adresaci);
    }