#include "Adresat.h"


void Adresat::ustawImie (string noweImie)
{
    imie = MetodyPomocnicze::zamienPierwszaLitereNaDuzaAPozostaleNaMale(noweImie);
}

void Adresat::ustawNazwisko (string noweNazwisko)
{
    nazwisko = MetodyPomocnicze::zamienPierwszaLitereNaDuzaAPozostaleNaMale(noweNazwisko);
}

void Adresat::ustawNumerTelefonu(string nowyNumerTelefonu)
{
    numerTelefonu = nowyNumerTelefonu;
}

void Adresat::ustawEmail(string nowyEmail)
{
    email = nowyEmail;
}

void Adresat::ustawAdres(string nowyAdres)
{
    adres = nowyAdres;
}

void Adresat::ustawId(int noweId)
{
   if (noweId>=0)
            id = noweId;
}


void Adresat::ustawIdUzytkownika(int noweIdUzytkownika)
{
   if (noweIdUzytkownika>=0)
            idUzytkownika = noweIdUzytkownika;
}

string Adresat::pobierzImie()
{
    return imie;
}

string Adresat::pobierzNazwisko()
{
    return nazwisko;
}

string Adresat::pobierzNumerTelefonu()
{
    return numerTelefonu;
}

string Adresat::pobierzEmail()
{
    return email;
}

string Adresat::pobierzAdres()
{
    return adres;
}

int Adresat::pobierzId()
{
    return id;
}

int Adresat::pobierzIdUzytkownika()
{
    return idUzytkownika;
}


