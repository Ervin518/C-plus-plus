#ifndef ZAD_6_KRAWEDZ_H
#define ZAD_6_KRAWEDZ_H

class Wierzcholek;

class Krawedz {
public:
    double koszt;
    Wierzcholek* cel;
    Krawedz(Wierzcholek* cel, double koszt);
};

#endif