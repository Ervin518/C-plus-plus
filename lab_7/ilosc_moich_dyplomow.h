#ifndef LAB_7_ILOSC_MOICH_DYPLOMOW_H
#define LAB_7_ILOSC_MOICH_DYPLOMOW_H

#include <iostream>

class ilosc_moich_dyplomow {
private:
    int dyplomy_I_stopnia;
    int dyplomy_II_stopnia;
    int dyplomy_III_stopnia;
    int ogolna_ilosc_dyplomow;
public:
    int ogolna_ilosc_osiagnien;
    ilosc_moich_dyplomow(int d1, int d2, int d3, int og_il_dypl, int og_il_os) : dyplomy_I_stopnia(d1), dyplomy_II_stopnia(d2), dyplomy_III_stopnia(d3), ogolna_ilosc_dyplomow(og_il_dypl), ogolna_ilosc_osiagnien(og_il_os) {}
    ilosc_moich_dyplomow& operator+=(const ilosc_moich_dyplomow& inne);
    ilosc_moich_dyplomow& operator-=(const ilosc_moich_dyplomow& inne);
    ilosc_moich_dyplomow& operator*=(const ilosc_moich_dyplomow& inne);
    ilosc_moich_dyplomow& operator/=(const ilosc_moich_dyplomow& inne);
    friend std::ostream& operator<<(std::ostream& os, const ilosc_moich_dyplomow& obj);
};

ilosc_moich_dyplomow operator+(ilosc_moich_dyplomow lhs, const ilosc_moich_dyplomow& rhs);
ilosc_moich_dyplomow operator-(ilosc_moich_dyplomow lhs, const ilosc_moich_dyplomow& rhs);
ilosc_moich_dyplomow operator*(ilosc_moich_dyplomow lhs, const ilosc_moich_dyplomow& rhs);
ilosc_moich_dyplomow operator/(ilosc_moich_dyplomow lhs, const ilosc_moich_dyplomow& rhs);

#endif
