//
// Created by Asus on 10/01/2022.
//

#ifndef MAIN_CPP_MELODIE_H
#define MAIN_CPP_MELODIE_H
#include <iostream>
#include <vector>
#include <string>
#include "exceptii.h"
using namespace std;
class melodie {
    string nume;
    string gen_muzical;
    int durata;
    int an_lansare;
public:

    melodie(const string &nume, const string &genMuzical, int durata, int anLansare);

    friend ostream &operator<<(ostream &os, const melodie &melodie);

    int getDurata() const;

};



#endif //MAIN_CPP_MELODIE_H
