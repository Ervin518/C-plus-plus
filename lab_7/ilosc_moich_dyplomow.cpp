#include "ilosc_moich_dyplomow.h"
#include <iostream>

ilosc_moich_dyplomow& ilosc_moich_dyplomow::operator+=(const ilosc_moich_dyplomow& inne) {
    this->dyplomy_I_stopnia += inne.dyplomy_I_stopnia;
    this->dyplomy_II_stopnia += inne.dyplomy_II_stopnia;
    this->dyplomy_III_stopnia += inne.dyplomy_III_stopnia;
    this->ogolna_ilosc_dyplomow += inne.ogolna_ilosc_dyplomow;
    this->ogolna_ilosc_osiagnien += inne.ogolna_ilosc_osiagnien;
    return *this;
}

ilosc_moich_dyplomow& ilosc_moich_dyplomow::operator-=(const ilosc_moich_dyplomow& inne) {
    this->dyplomy_I_stopnia -= inne.dyplomy_I_stopnia;
    this->dyplomy_II_stopnia -= inne.dyplomy_II_stopnia;
    this->dyplomy_III_stopnia -= inne.dyplomy_III_stopnia;
    this->ogolna_ilosc_dyplomow -= inne.ogolna_ilosc_dyplomow;
    this->ogolna_ilosc_osiagnien -= inne.ogolna_ilosc_osiagnien;
    return *this;
}

ilosc_moich_dyplomow& ilosc_moich_dyplomow::operator*=(const ilosc_moich_dyplomow& inne) {
    this->dyplomy_I_stopnia *= inne.dyplomy_I_stopnia;
    this->dyplomy_II_stopnia *= inne.dyplomy_II_stopnia;
    this->dyplomy_III_stopnia *= inne.dyplomy_III_stopnia;
    this->ogolna_ilosc_dyplomow *= inne.ogolna_ilosc_dyplomow;
    this->ogolna_ilosc_osiagnien *= inne.ogolna_ilosc_osiagnien;
    return *this;
}

ilosc_moich_dyplomow& ilosc_moich_dyplomow::operator/=(const ilosc_moich_dyplomow& inne) {
    if (inne.dyplomy_I_stopnia != 0) this->dyplomy_I_stopnia /= inne.dyplomy_I_stopnia;
    if (inne.dyplomy_II_stopnia != 0) this->dyplomy_II_stopnia /= inne.dyplomy_II_stopnia;
    if (inne.dyplomy_III_stopnia != 0) this->dyplomy_III_stopnia /= inne.dyplomy_III_stopnia;
    if (inne.ogolna_ilosc_dyplomow != 0) this->ogolna_ilosc_dyplomow /= inne.ogolna_ilosc_dyplomow;
    if (inne.ogolna_ilosc_osiagnien != 0) this->ogolna_ilosc_osiagnien /= inne.ogolna_ilosc_osiagnien;
    return *this;
}

ilosc_moich_dyplomow operator+(ilosc_moich_dyplomow lhs, const ilosc_moich_dyplomow& rhs) {
    lhs += rhs;
    return lhs;
}

ilosc_moich_dyplomow operator-(ilosc_moich_dyplomow lhs, const ilosc_moich_dyplomow& rhs) {
    lhs -= rhs;
    return lhs;
}

ilosc_moich_dyplomow operator*(ilosc_moich_dyplomow lhs, const ilosc_moich_dyplomow& rhs) {
    lhs *= rhs;
    return lhs;
}

ilosc_moich_dyplomow operator/(ilosc_moich_dyplomow lhs, const ilosc_moich_dyplomow& rhs) {
    lhs /= rhs;
    return lhs;
}

std::ostream& operator<<(std::ostream& os, const ilosc_moich_dyplomow& obj) {
    os << "Dyplomy I stopnia: " << obj.dyplomy_I_stopnia << "\n"
       << "Dyplomy II stopnia: " << obj.dyplomy_II_stopnia << "\n"
       << "Dyplomy III stopnia: " << obj.dyplomy_III_stopnia << "\n"
       << "Ogolna ilosc dyplomow (brak gettera): " << obj.ogolna_ilosc_dyplomow << "\n"
       << "Ogolna ilosc osiagnien: " << obj.ogolna_ilosc_osiagnien << "\n";
    return os;
}
