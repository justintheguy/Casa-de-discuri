//
// Created by Asus on 21/01/2022.
//

#include "festival.h"

festival::festival(const string &nume, const string &locatie, int nrLocuri, const string &dataInceput,
                   const string &dataFinal) : nume(nume), locatie(locatie), nr_locuri(nrLocuri),
                                              data_inceput(dataInceput), data_final(dataFinal) {}

ostream &operator<<(ostream &os, const festival &festival) {
    os << "nume: " << festival.nume << " locatie: " << festival.locatie << " nr_locuri: " << festival.nr_locuri
       << " data_inceput: " << festival.data_inceput << " data_final: " << festival.data_final;
    return os;
}

festival festival_factory::festival_neversea() {
    return festival("Neversea", "Constanta", 50000, "21/07/2022", "28/07/2022");
}

festival festival_factory::festival_untold() {
    return festival("Untold", "Cluj-Napoca", 45000, "25/08/2022", "31/08/2022");
}

festival festival_factory::festival_electric_castle() {
    return festival("Electric Castle", "Bontida", 25000, "13/07/2022", "17/07/2022");
}
