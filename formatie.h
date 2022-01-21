//
// Created by Asus on 17/01/2022.
//

#ifndef MAIN_CPP_FORMATIE_H
#define MAIN_CPP_FORMATIE_H
#include <iostream>
#include <vector>
#include <string>
#include "artist.h"
#include <memory>
using namespace std;

class formatie : public artist {
    int nr_membri;
    string nume_lider;
    int nr_piese_lansate;
    int nr_concerte;
    int rating;

public:
   /* formatie(const string &nume, const string &tipArtist, const string &genMuzical, float valContributie,
             float comision, int nrMembri, const string &numeLider, int nrPieseLansate, int nrConcerte); */


    shared_ptr<artist> clona() const override;

    formatie(const string &nume, const string &tipArtist, const string &genMuzical, float valContributie,
             float comision, const vector<festival> &festivaluri, int nrMembri, const string &numeLider,
             int nrPieseLansate, int nrConcerte);

    ~formatie() override = default;
    int obtine_rating() override;
    void afis(ostream &os) const override;
    friend ostream &operator<<(ostream &os,  const formatie &formatie);
};

#endif //MAIN_CPP_FORMATIE_H
