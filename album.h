//
// Created by Asus on 10/01/2022.
//

#ifndef MAIN_CPP_ALBUM_H
#define MAIN_CPP_ALBUM_H
#include <iostream>
#include <vector>
#include  <string>
#include "melodie.h"
using namespace std;

class album {
    string nume;
    string gen_muzical;
    int nrMelodii;
    int anLansare;
    int durata;
     vector<melodie> melodii;

public:
    album(const string &nume, const string &genMuzical, int nrMelodii, int anLansare);

    int getDurata() const;


    /* int getVanzari() const {
         return vanzari;
     } */


     void adauga(melodie &m);

    friend ostream &operator<<(ostream &os, const album &album);


    int durata_album();
};



#endif //MAIN_CPP_ALBUM_H
