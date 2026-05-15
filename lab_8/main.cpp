#include "aplikacja_sportowa.h"
#include "powiadomienia_aplikacji.h"
#include <iostream>

int main() {
    centrum_premium centrum_wydarzen;

    powiadomienie_push telefon_Ervina;
    powiadomienie_sms stary_telefon_Ervina;

    centrum_wydarzen.dodaj_obsewatora(&telefon_Ervina);
    centrum_wydarzen.dodaj_obsewatora(&stary_telefon_Ervina);

    std::cout << "--- WYBIERAMY REGION: BIALORUS ---" << std::endl;
    fabryka_sportowa* fabryka = new fabryka_Bialorus();

    pilka_nozna* mecz_Bialorus = fabryka->stworz_pika_nozna();
    hokej* hokej_Bialorus = fabryka->stworz_hokej();

    centrum_wydarzen.rozeslij_wiadomosc(mecz_Bialorus->pobierz_wynik());
    centrum_wydarzen.rozeslij_wiadomosc(hokej_Bialorus->pobierz_wynik());


    std::cout << "\n--- ZMIENIAMY REGION: UKRAINA ---" << std::endl;
    delete fabryka;
    fabryka = new fabryka_Ukraina();

    pilka_nozna* mecz_Ukraina = fabryka->stworz_pika_nozna();
    centrum_wydarzen.rozeslij_wiadomosc(mecz_Ukraina->pobierz_wynik());

    delete mecz_Bialorus;
    delete hokej_Bialorus;
    delete mecz_Ukraina;
    delete fabryka;

    return 0;
}