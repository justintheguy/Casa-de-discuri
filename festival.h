//
// Created by Asus on 21/01/2022.
//

#ifndef MAIN_CPP_FESTIVAL_H
#define MAIN_CPP_FESTIVAL_H
#include <iostream>
#include <string>

using namespace std;

class festival {
    string nume;
    string locatie;
    int nr_locuri;
    string data_inceput;
    string data_final;
public:
    festival(const string &nume, const string &locatie, int nrLocuri, const string &dataInceput,
             const string &dataFinal);

    friend ostream &operator<<(ostream &os, const festival &festival);
};

class festival_factory{
public:
    static festival festival_neversea();
    static festival festival_untold();
    static festival festival_electric_castle();
};
#endif //MAIN_CPP_FESTIVAL_H
