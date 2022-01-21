//
// Created by Asus on 21/01/2022.
//

#ifndef MAIN_CPP_STUDIO_BUILDER_H
#define MAIN_CPP_STUDIO_BUILDER_H
#include <iostream>
#include <string>
using namespace std;
class studio{
    string nume;
    string locatie;
    string microfon;
    string casti_inregistrare;
    int nr_camere;
    string tip_locatie;
    string tip_microfon;
    string tip_casti_inregistrare;
    friend class studio_builder;

public:
    studio() = default;

    friend ostream &operator<<(ostream &os, const studio &studio);


};


class studio_builder {
    studio s;

public:
    studio_builder() = default;
    studio_builder &nume(string nume);

    studio_builder &locatie(string locatie);

    studio_builder &microfon(string microfon);

    studio_builder &casti_inregistrare(string casti_inregistrare);

    studio_builder &nr_camere(int nr_camere);

    studio_builder &tip_locatie(string tip_locatie);

    studio_builder &tip_microfon(string tip_microfon);

    studio_builder &tip_casti_inregistrare(string tip_casti_inregistrare);
    studio build();
};




#endif //MAIN_CPP_STUDIO_BUILDER_H
