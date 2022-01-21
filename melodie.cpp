//
// Created by Asus on 10/01/2022.
//

#include "melodie.h"

//melodie(const string &nume, const string &gen_muzical, int an_lansare):nume(nume),gen_muzical(gen_muzical),an_lansare(an_lansare){}
melodie::melodie(const string &nume, const string &genMuzical, int durata, int anLansare) : nume(nume), gen_muzical(genMuzical), durata(durata),
                                                                                an_lansare(anLansare) {
    if(durata < 3){
        throw(melodie_scurta());
    }
    if(an_lansare > 2022)
        throw(an_mare());
}

ostream &operator<<(ostream &os, const melodie &melodie) {
    os << "nume: " << melodie.nume << " gen_muzical: " << melodie.gen_muzical << " an_lansare: " << melodie.an_lansare;
    return os;
}
int melodie::getDurata() const {
    return durata;}