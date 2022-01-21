//
// Created by Asus on 17/01/2022.
//

#ifndef MAIN_CPP_DJ_H
#define MAIN_CPP_DJ_H
#include <iostream>
#include <vector>
#include <string>
#include "artist.h"
#include <memory>
using namespace std;

class dj: public artist {
    string main_beat_genre;
    vector<string> beat_types;
    int nr_followeri_instagram;
    int rating;

public:
    /* dj(const string &nume, const string &tipArtist, const string &genMuzical, float valContributie, float comision,
       const string &mainBeatGenre, const vector<string> &beatTypes, int nrFolloweriInstagram); */

    shared_ptr<artist> clona() const override;

    dj(const string &nume, const string &tipArtist, const string &genMuzical, float valContributie, float comision,
       const vector<festival> &festivaluri, const string &mainBeatGenre, const vector<string> &beatTypes,
       int nrFolloweriInstagram);

    ~dj() override = default;
    int obtine_rating() override;
    void afis(ostream &os) const override;
    friend ostream &operator<<(ostream &os,  const dj &dj);
    void adauga(string &beat);
};


#endif //MAIN_CPP_DJ_H
