//
// Created by Asus on 11/01/2022.
//

#include "solist.h"
shared_ptr<artist> solist::clona() const{
    return std::make_shared <solist>(*this); }

/*solist::solist(const string &nume, const string &tipArtist, const string &genMuzical, float valContributie,
               float comision, int rangeVocal, const vector<string> &instrumente, const string &timbruVocal, bool colab,
               const vector<string> &genuriMuzicale) : artist(nume, tipArtist, genMuzical, valContributie, comision),
                                                       range_vocal(rangeVocal), instrumente(instrumente),
                                                       timbru_vocal(timbruVocal), colab(colab),
                                                       genuri_muzicale(genuriMuzicale), rating(obtine_rating()) {} */

int solist::obtine_rating(){
    int rating = instrumente.size() + range_vocal + genuri_muzicale.size();
    return rating;
}
void solist::afis(ostream &os) const{
    artist::afis(os);
    os << range_vocal << " " << timbru_vocal << " " << colab << " " << rating << " ";
    for( int i = 0; i <= instrumente.size(); i++){
        os << instrumente[i] << " ";
    }
    for( int i = 0; i <= genuri_muzicale.size(); i++){
        os << genuri_muzicale[i] << " ";
    }
}

ostream &operator<<(ostream &os, const solist &solist) {
    solist.afis(os);
    return os;
}

void solist::adauga(string &inst) {
    instrumente.push_back(inst);
}

void solist::adauga2(string &gen) {
    genuri_muzicale.push_back(gen);

}

solist::solist(const string &nume, const string &tipArtist, const string &genMuzical, float valContributie,
               float comision, const vector<festival> &festivaluri, int rangeVocal, const vector<string> &instrumente,
               const string &timbruVocal, bool colab, const vector<string> &genuriMuzicale) : artist(nume,
                                                                                                                 tipArtist,
                                                                                                                 genMuzical,
                                                                                                                 valContributie,
                                                                                                                 comision,
                                                                                                                 festivaluri),
                                                                                                          range_vocal(
                                                                                                                  rangeVocal),
                                                                                                          instrumente(
                                                                                                                  instrumente),
                                                                                                          timbru_vocal(
                                                                                                                  timbruVocal),
                                                                                                          colab(colab),
                                                                                                          genuri_muzicale(
                                                                                                                  genuriMuzicale),
                                                                                                          rating(obtine_rating()) {}
