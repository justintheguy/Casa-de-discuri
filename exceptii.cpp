//
// Created by Asus on 18/01/2022.
//

#include "exceptii.h"

exceptie::exceptie(const string &arg) : runtime_error(arg) {}

melodie_scurta::melodie_scurta() : exceptie("Melodie prea scurta") {}

an_mare::an_mare() : exceptie("Anul este prea mare") {}
