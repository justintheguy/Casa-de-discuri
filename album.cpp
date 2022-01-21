//
// Created by Asus on 10/01/2022.
//

#include "album.h"
void album::adauga(melodie &m){
    melodii.push_back(m);
    durata = durata_album();
}

album::album(const string &nume, const string &genMuzical, int nrMelodii, int anLansare) : nume(nume), gen_muzical(genMuzical), nrMelodii(nrMelodii),
                                                                                           anLansare(anLansare), durata(0) {}

 /* ostream &operator<<(ostream &os, const album &albume) {
    os << albume.nume << " " << albume.gen_muzical << " " << albume.nrMelodii << " " << albume.anLansare<< " "<<albume.vanzari<< endl;
    for (const auto &m: albume.melodii)
        os << m;
    os << endl;
    return os;
} */

int album::durata_album(){
    int durata=0;
    int i;
    for(i = 0; i< melodii.size(); i++)
         durata = durata+ melodii[i].getDurata();
    return durata;
}

int album::getDurata() const {
    return durata;
}

ostream &operator<<(ostream &os, const album &album) {
    os << "nume: " << album.nume << " gen_muzical: " << album.gen_muzical << " nrMelodii: " << album.nrMelodii
       << " anLansare: " << album.anLansare << " durata: " << album.durata << " melodii: ";
    for(const auto &it : album.melodii )
        os << it << " ";
    return os;
}



