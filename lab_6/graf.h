#ifndef ZAD_6_GRAF_H
#define ZAD_6_GRAF_H

#include <string>
#include <vector>
#include "wierzcholek.h"

class Graf {
private:
    std::vector<Wierzcholek*> wierzcholki;
    int start_index;

public:
    Graf();
    ~Graf();

    void dodaj_wierzcholek(std::string nazwa);
    void dodaj_krawedz(int poczatkowy_index, int koncowy_index, double koszt);

    int getStartIndex() const { return start_index; }
    void setStartIndex(int index) { start_index = index; }

    const std::vector<Wierzcholek*>& getWierzcholki() const { return wierzcholki; }
};

#endif