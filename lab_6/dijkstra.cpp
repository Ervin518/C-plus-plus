#include "graf.h"
#include "wierzcholek.h"
#include "krawedz.h"
#include <queue>
#include <limits>

struct element_kolejki {
    Wierzcholek *w;
    double dystans;

    bool operator>(const element_kolejki& inny) const {
        return dystans > inny.dystans;
    }
};

void algorytm_dijkstry(Graf& g) {
    auto& wierzcholki = g.getWierzcholki();

    for (Wierzcholek* w : wierzcholki) {
        w->setKoszt(std::numeric_limits<double>::infinity());
        w->setPoprzednik(nullptr);
    }

    if (g.getStartIndex() >= wierzcholki.size()) return;

    Wierzcholek* start = wierzcholki[g.getStartIndex()];
    start->setKoszt(0);

    std::priority_queue<element_kolejki, std::vector<element_kolejki>, std::greater<element_kolejki>> pq;
    pq.push({start, 0});

    while (!pq.empty()) {
        Wierzcholek* u = pq.top().w;
        double d = pq.top().dystans;
        pq.pop();

        if (d > u->getKoszt()) continue;

        for (const auto& k : u->getKrawedzie()) {
            Wierzcholek* v = k.cel;
            double nowa_waga = u->getKoszt() + k.koszt;

            if (nowa_waga < v->getKoszt()) {
                v->setKoszt(nowa_waga);
                v->setPoprzednik(u);
                pq.push({v, nowa_waga});
            }
        }
    }
}