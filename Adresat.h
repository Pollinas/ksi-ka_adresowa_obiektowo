#ifndef ADRESAT_H
#define ADRESAT_H
#include <iostream>

#include "MetodyPomocnicze.h"


using namespace std;

class Adresat
{
    string imie;
    string nazwisko;
    string numerTelefonu;
    string email;
    string adres;
    int id;
    int idUzytkownika;

public:

    Adresat(string imie="", string nazwisko="", string numerTelefonu="",string email="",string adres="",
    int id =0, int idUzytkownika=0)
    {
        this->id = id;
        this->idUzytkownika = idUzytkownika;
        this->imie = imie;
        this->nazwisko = nazwisko;
        this->numerTelefonu = numerTelefonu;
        this->email = email;
        this->adres = adres;

    }

    void ustawImie(string noweImie);
    void ustawNazwisko(string noweNazwisko);
    void ustawNumerTelefonu(string nowyNumerTelefonu);
    void ustawEmail(string nowyEmail);
    void ustawAdres(string nowyAdres);
    void ustawId(int noweId);
    void ustawIdUzytkownika(int noweIdUzytkownika);

    string pobierzImie();
    string pobierzNazwisko();
    string pobierzNumerTelefonu();
    string pobierzEmail();
    string pobierzAdres();
    int pobierzId();
    int pobierzIdUzytkownika();

};

#endif
