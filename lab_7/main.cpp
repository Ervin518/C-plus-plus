#include "ilosc_moich_dyplomow.h"
#include <iostream>

using namespace std;

int main() {
    ilosc_moich_dyplomow wiek_6_15 (5, 2, 3, 10, 13);
    ilosc_moich_dyplomow wiek_16_17 (4, 1, 2, 7, 20);

    cout << "Ilosc osiagnien z 6 do 15 lat:\n" << wiek_6_15 << endl;
    cout << "Ilosc osiagnien z 16 do 17 lat::\n" << wiek_16_17 << endl;

    ilosc_moich_dyplomow suma = wiek_6_15 + wiek_16_17;
    cout << "Wynik dodawania" << endl;
    cout << suma << endl;

    ilosc_moich_dyplomow roznica = wiek_16_17 - wiek_6_15;
    cout << "Wynik odejmowania" << endl;
    cout << roznica << endl;

    cout << "Sprawdzanie operatora +=" << endl;
    wiek_6_15 += wiek_16_17;
    cout << "Nowy stan ilosci osiagnien od 6 do 15 lat:\n" << wiek_6_15 << endl;

    cout << "Sprawdzanie operatora *=" << endl;
    wiek_16_17 *= suma;
    cout << "Nowy stan ilosci osiagnien od 16 do 17 lat:\n" << wiek_16_17 << endl;

    return 0;
}