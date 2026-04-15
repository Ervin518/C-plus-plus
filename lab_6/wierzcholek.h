#ifndef ZAD_6_WIERZCHOLEK_H
#define ZAD_6_WIERZCHOLEK_H

#include <string>
#include <vector>
#include <limits>

class Krawedz;

class Wierzcholek {
private:
    std::string nazwa;
    Wierzcholek* poprzednik;
    double koszt;
    std::vector<Krawedz> krawedzie;

public:
    Wierzcholek(std::string nazwa);

    std::string getNazwa() const { return nazwa; }

    double getKoszt() const { return koszt; }
    void setKoszt(double k) { koszt = k; }

    Wierzcholek* getPoprzednik() const { return poprzednik; }
    void setPoprzednik(Wierzcholek* p) { poprzednik = p; }

    std::vector<Krawedz>& getKrawedzie() { return krawedzie; }
    const std::vector<Krawedz>& getKrawedzie() const { return krawedzie; }

    void dodajKrawedz(const Krawedz& k);
};

#endif