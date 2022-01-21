//
// Created by Asus on 18/01/2022.
//

#ifndef MAIN_CPP_EXCEPTII_H
#define MAIN_CPP_EXCEPTII_H

#include <stdexcept>

using namespace std;

class exceptie : public runtime_error {
public:
    exceptie(const string &arg);

};
class melodie_scurta : public exceptie{
public:
    melodie_scurta();
};
class an_mare :public exceptie{
public:
    an_mare();
};
#endif //MAIN_CPP_EXCEPTII_H
