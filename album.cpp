//
// Created by Asus on 10/01/2022.
//

#include "album.h"
void album::adauga(melodie &m){
    melodii.push_back(m);
}



 /* ostream &operator<<(ostream &os, const album &albume) {
    os << albume.nume << " " << albume.gen_muzical << " " << albume.nrMelodii << " " << albume.anLansare<< " "<<albume.vanzari<< endl;
    for (const auto &m: albume.melodii)
        os << m;
    os << endl;
    return os;
} */

void album::durata_album(){
    int durata=0;
    int i;
    for(i = 0; i< melodii.size(); i++)
         durata = durata+ melodii[i].getDurata();
    cout << "Durata albumului este de" <<durata;}

album::album(const string &nume, const string &genMuzical, int nrMelodii, int anLansare, int durata,
             const vector<melodie> &melodii) : nume(nume), gen_muzical(genMuzical), nrMelodii(nrMelodii),
                                               anLansare(anLansare), durata(durata), melodii(melodii) {}

