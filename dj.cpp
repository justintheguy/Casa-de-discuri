//
// Created by Asus on 17/01/2022.
//

#include "dj.h"
 /*dj::dj(const string &nume, const string &tipArtist, const string &genMuzical, float valContributie, float comision,
       const string &mainBeatGenre, const vector<string> &beatTypes, int nrFolloweriInstagram) : artist(
        nume, tipArtist, genMuzical, valContributie, comision), main_beat_genre(mainBeatGenre), beat_types(beatTypes),
                                                                                                             nr_followeri_instagram(
                                                                                                                     nrFolloweriInstagram),
                                                                                                             rating(obtine_rating()) {} */
 dj::dj(const string &nume, const string &tipArtist, const string &genMuzical, float valContributie, float comision,
        const vector<festival> &festivaluri, const string &mainBeatGenre, const vector<string> &beatTypes,
        int nrFolloweriInstagram) : artist(nume, tipArtist, genMuzical, valContributie, comision,
                                                       festivaluri), main_beat_genre(mainBeatGenre),
                                                beat_types(beatTypes), nr_followeri_instagram(nrFolloweriInstagram),
                                                rating(obtine_rating()) {}
shared_ptr<artist> dj::clona() const{
    return std::make_shared <dj>(*this); }

int dj::obtine_rating() {
   int rating = nr_followeri_instagram + beat_types.size();
   return rating;
}

void dj::afis(ostream &os) const {
    artist::afis(os);
    os << main_beat_genre << " " << nr_followeri_instagram << " " << rating << " ";
    for( int i = 0; i < beat_types.size(); i++)
        os << beat_types[i] << " ";
}

ostream &operator<<(ostream &os, const dj &dj) {
    dj.afis(os);
    return os;
}

void dj::adauga(string &beat) {
    beat_types.push_back(beat);
}





