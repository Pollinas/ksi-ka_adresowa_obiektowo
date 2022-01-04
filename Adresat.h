#ifndef ADRESAT_H
#define ADRESAT_H
#include <iostream>

#include "MetodyPomocnicze.h"


using namespace std;

class Adresat
{
    string imie, nazwisko, numerTelefonu, email, adres;
    int id, idUzytkownika;

public:

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
