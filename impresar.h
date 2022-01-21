//
// Created by Asus on 10/01/2022.
//

#ifndef MAIN_CPP_IMPRESAR_H
#define MAIN_CPP_IMPRESAR_H
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include "artist.h"
#include "studio_builder.h"

using namespace std;

template <typename T>
class impresar;

template <typename T>
ostream &operator<<(ostream &os, const impresar<T> &impresar);

template <typename T>
class impresar {
    string nume;
    T comision;
    vector <shared_ptr < artist>> artisti;
    vector <studio> studiouri;
public:
    void adauga(artist &a);

    impresar(const string &nume, T comision, const vector<studio> &studiouri);

    friend ostream &operator<< <>(ostream &, const impresar<T> &);
    void sortare_artisti();
};



#endif //MAIN_CPP_IMPRESAR_H
