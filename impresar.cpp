//
// Created by Asus on 10/01/2022.
//

#include "impresar.h"

template <typename T>
impresar<T>::impresar(const string &nume, T comision, const vector<studio> &studiouri) : nume(nume), comision(comision), studiouri(studiouri) {}

template <typename T>
void impresar<T>::adauga(artist &a){
    artisti.push_back(a.clona());
}

template <typename T>
 ostream &operator<< (ostream &os, const impresar<T> &impresari) {
    os << impresari.nume << " " << impresari.comision << endl;
    for(const auto &a:impresari.artisti)
        os<<a;
    os<<endl;

    for(const auto &st : impresari.studiouri)
        os << st;
    os<<endl;
    os<<endl;
    return os;
}


template <typename T>
void impresar<T>::sortare_artisti(){

    sort(artisti.begin(), artisti.end(), [](const auto &A, const auto &B){
        return A->getNume() < B->getNume();
    } );
}







