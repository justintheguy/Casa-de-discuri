//
// Created by Asus on 21/01/2022.
//

#include "studio_builder.h"
ostream &operator<<(ostream &os, const studio &studio) {
    os << "nume: " << studio.nume << " locatie: " << studio.locatie << " microfon: " << studio.microfon
       << " casti_inregistrare: " << studio.casti_inregistrare << " nr_camere: " << studio.nr_camere << " tip_locatie: "
       << studio.tip_locatie << " tip_microfon: " << studio.tip_microfon << " tip_casti_inregistrare: "
       << studio.tip_casti_inregistrare;
    return os;
}

studio_builder &studio_builder::nume(string nume) {
    s.nume = nume;
    return *this;
}

studio_builder &studio_builder::locatie(string locatie) {
    s.locatie = locatie;
    return *this;
}

studio_builder &studio_builder::casti_inregistrare(string casti_inregistrare) {
    s.casti_inregistrare = casti_inregistrare;
    return *this;
}

studio_builder &studio_builder::microfon(string microfon) {
    s.microfon = microfon;
    return *this;
}

studio_builder &studio_builder::nr_camere(int nr_camere) {
    s.nr_camere = nr_camere;
    return *this;
}

studio_builder &studio_builder::tip_locatie(string tip_locatie) {
    s.tip_locatie = tip_locatie;
    return *this;
}

studio_builder &studio_builder::tip_microfon(string tip_microfon) {
    s.tip_microfon = tip_microfon;
    return *this;
}

studio_builder &studio_builder::tip_casti_inregistrare(string tip_casti_inregistrare) {
    s.tip_casti_inregistrare = tip_casti_inregistrare;
    return *this;
}

studio studio_builder::build() {

    return s;
}
