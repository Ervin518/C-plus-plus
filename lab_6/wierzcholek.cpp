#include "wierzcholek.h"
#include "krawedz.h"
#include <limits>

using namespace std;

Wierzcholek::Wierzcholek(string nazwa) : nazwa(nazwa) {
    this->poprzednik = nullptr;
    this->koszt = numeric_limits<double>::infinity();
}

void Wierzcholek::dodajKrawedz(const Krawedz& k) {
    krawedzie.push_back(k);
}