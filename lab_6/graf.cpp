#include "graf.h"
#include "krawedz.h"
#include <iostream>

using namespace std;

Graf::Graf() : start_index(0) {}

void Graf::dodaj_wierzcholek(string nazwa) {
    wierzcholki.push_back(new Wierzcholek(nazwa));
}

void Graf::dodaj_krawedz(int poczatkowy_index, int koncowy_index, double koszt) {
    if(poczatkowy_index >= 0 && poczatkowy_index < wierzcholki.size() && koncowy_index >= 0 && koncowy_index < wierzcholki.size()) {
        Wierzcholek *cel = wierzcholki[koncowy_index];
        Krawedz nowa_krawedz(cel, koszt);
        wierzcholki[poczatkowy_index]->dodajKrawedz(nowa_krawedz);
    }
}

Graf::~Graf() {
    for(Wierzcholek* w : wierzcholki) {
        delete w;
    }
    wierzcholki.clear();
}