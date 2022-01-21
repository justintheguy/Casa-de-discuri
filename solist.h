//
// Created by Asus on 11/01/2022.
//

#ifndef MAIN_CPP_SOLIST_H
#define MAIN_CPP_SOLIST_H
#include <iostream>
#include <vector>
#include <string>
#include "artist.h"
#include <memory>
using namespace std;

class solist: public artist {
       int range_vocal;
       vector<string> instrumente;
       string timbru_vocal;
       bool colab;
       vector<string> genuri_muzicale;
       int rating;
public:
    /*solist(const string &nume, const string &tipArtist, const string &genMuzical, float valContributie, float comision,
           int rangeVocal, const vector<string> &instrumente, const string &timbruVocal, bool colab,
           const vector<string> &genuriMuzicale); */

    shared_ptr<artist> clona() const override;

    solist(const string &nume, const string &tipArtist, const string &genMuzical, float valContributie, float comision,
           const vector<festival> &festivaluri, int rangeVocal, const vector<string> &instrumente,
           const string &timbruVocal, bool colab, const vector<string> &genuriMuzicale);

    ~solist() override = default;
    int obtine_rating() override;
    void afis(ostream &os) const override;
    friend ostream &operator<<(ostream &os,  const solist &solist);
    void adauga(string &inst);
    void adauga2(string &gen);
};




#endif //MAIN_CPP_SOLIST_H
