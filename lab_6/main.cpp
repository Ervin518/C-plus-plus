#include "graf.h"
#include <fstream>
#include <iostream>

using namespace std;

void algorytm_dijkstry(Graf& g);

int main() {
    ifstream plik("dane_do_zadania.txt");
    if (!plik.is_open()) {
        cerr << "Nie udalo sie otworzyc pliku!" << endl;
        return 1;
    }

    int liczba_wierzcholkow, start_indx;
    if (!(plik >> liczba_wierzcholkow >> start_indx)) return 1;

    Graf moj_graf;
    moj_graf.setStartIndex(start_indx);

    for (int i = 0; i < liczba_wierzcholkow; ++i) {
        string nazwa;
        plik >> nazwa;
        moj_graf.dodaj_wierzcholek(nazwa);
    }

    int poczatek, koncowy_index; // Исправлена опечатка
    double waga;
    while (plik >> poczatek >> koncowy_index >> waga) {
        moj_graf.dodaj_krawedz(poczatek, koncowy_index, waga);
    }
    plik.close();

    algorytm_dijkstry(moj_graf);

    auto& wierzcholki = moj_graf.getWierzcholki();
    cout << "Wyniki algorytmu Dijkstry (start: " << wierzcholki[start_indx]->getNazwa() << "):" << endl;

    for (Wierzcholek* w : wierzcholki) {
        cout << "Do " << w->getNazwa() << " -> ";
        if (w->getKoszt() == numeric_limits<double>::infinity()) {
            cout << "brak polaczenia" << endl;
        } else {
            cout << "odleglosc: " << w->getKoszt() << " km" << endl;
        }
    }

    return 0;
}