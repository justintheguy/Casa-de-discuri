//
// Created by Asus on 10/01/2022.
//
#include <iostream>
#include <string>
#include <vector>
#include <memory>
#include "festival.h"
using namespace std;
#ifndef MAIN_CPP_ARTIST_H
#define MAIN_CPP_ARTIST_H


class artist{
        string nume;
        string tip_artist;//tip_artist insemnand single sau formatie
        string gen_muzical;
        float val_contributie;
        float comision; //comision=nr procente
        int rating;
        const int id;
        static int sum;
        vector<festival> festivaluri;

    public:
        artist(const string &nume, const string &tip_artist, const string &gen_muzical, float val_contributie, float comision, const vector<festival> &festivaluri);

        artist(const artist &copie);

        artist &operator=(const artist &copie);

        const string &getNume();

        virtual ~artist() = default;

        friend ostream &operator<<(ostream &os, const artist &artisti);
        virtual shared_ptr <artist> clona() const = 0;
        virtual int obtine_rating()  = 0;
        virtual void afis(ostream &os) const;
};


#endif //MAIN_CPP_ARTIST_H
