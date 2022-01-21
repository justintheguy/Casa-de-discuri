//
// Created by Asus on 10/01/2022.
//

#include "artist.h"

int artist::sum = 1;
artist::artist(const string &nume, const string &tip_artist, const string &gen_muzical, float val_contributie, float comision, const vector<festival> &festivaluri)
        : nume(nume), tip_artist(tip_artist), gen_muzical(gen_muzical), val_contributie(val_contributie), comision(comision), id(sum), festivaluri(festivaluri) {
        sum++;

}
artist::artist(const artist &copie):id(sum) {
    this->nume = copie.nume;
    this->tip_artist = copie.tip_artist;
    this->gen_muzical = copie.gen_muzical;
    this->val_contributie = copie.val_contributie;
    this->comision = copie.comision;
    sum ++;
}

artist& artist:: operator=(const artist &copie) {
    this->nume = copie.nume;
    this->tip_artist = copie.tip_artist;
    this->gen_muzical = copie.gen_muzical;
    this->val_contributie = copie.val_contributie;
    this->comision = copie.comision;

    return *this;

}





 ostream &operator<<(ostream &os, const artist &artist) {
    artist.afis(os);
    return os;

}

const string &artist::getNume() {
    return nume;
}

void artist::afis(ostream &os) const{
    os << nume << " " << tip_artist << " " << gen_muzical << " " << val_contributie
       << " " << comision << " " << id;

}
