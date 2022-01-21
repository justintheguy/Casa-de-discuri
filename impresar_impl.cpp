//
// Created by Asus on 21/01/2022.
//
#include "impresar.cpp"

template class impresar<int>;
template class impresar<float>;

template ostream &operator<< <>(ostream &, const impresar<int> &);
template ostream &operator<< <>(ostream &, const impresar<float> &);