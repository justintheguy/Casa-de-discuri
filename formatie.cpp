//
// Created by Asus on 17/01/2022.
//

#include "formatie.h"
/*formatie::formatie(const string &nume, const string &tipArtist, const string &genMuzical, float valContributie,
                   float comision, int nrMembri, const string &numeLider, int nrPieseLansate, int nrConcerte
                   ) : artist(nume, tipArtist, genMuzical, valContributie, comision), nr_membri(nrMembri),
                                 nume_lider(numeLider), nr_piese_lansate(nrPieseLansate), nr_concerte(nrConcerte),
                                 rating(obtine_rating()) {} */

shared_ptr<artist> formatie::clona() const{
    return std::make_shared <formatie>(*this); }

int formatie::obtine_rating() {
    cout << "Ratingul formatiei este: ";
    int rating;
      rating = nr_piese_lansate/nr_membri + nr_concerte;
    return rating;
}

void formatie::afis(ostream &os) const {
        artist::afis(os);
        os << nr_membri << " " << nume_lider<< " " << nr_piese_lansate << " " << nr_concerte << " " << rating << " ";

}

ostream &operator<<(ostream &os, const formatie &formatie) {
    formatie.afis(os);
    return os;
}

formatie::formatie(const string &nume, const string &tipArtist, const string &genMuzical, float valContributie,
                   float comision, const vector<festival> &festivaluri, int nrMembri, const string &numeLider,
                   int nrPieseLansate, int nrConcerte) : artist(nume, tipArtist, genMuzical, valContributie,
                                                                            comision, festivaluri), nr_membri(nrMembri),
                                                                     nume_lider(numeLider),
                                                                     nr_piese_lansate(nrPieseLansate),
                                                                     nr_concerte(nrConcerte), rating(obtine_rating()) {}




