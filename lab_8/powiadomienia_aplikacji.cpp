#include "powiadomienia_aplikacji.h"

void powiadomienie_push::aktualizuj(const std::string &wydarzenie) {
    std::cout << "[APLIKACJA PUSH]: " << wydarzenie << std::endl;
}

void powiadomienie_sms::aktualizuj(const std::string &wydarzenie) {
    std::cout << "[SMS]: " << wydarzenie << std::endl;
}

void centrum_wydarzen_podmiot::dodaj_obsewatora(powiadomienie_obserwator *o) {
    obserwatorzy.push_back(o);
}

void centrum_wydarzen_podmiot::usun_obsewatora(powiadomienie_obserwator *o) {
    obserwatorzy.erase(std::remove(obserwatorzy.begin(), obserwatorzy.end(), o), obserwatorzy.end());
}

void centrum_premium::rozeslij_wiadomosc(const std::string &wiadomosc) {
    for (auto* obs : obserwatorzy) {
        obs->aktualizuj("PILNE: " + wiadomosc);
    }
}

void centrum_standard::rozeslij_wiadomosc(const std::string &wiadomosc) {
    for (auto* obs : obserwatorzy) {
        obs->aktualizuj("Info: " + wiadomosc);
    }
}