#ifndef LAB_8_POWIADOMIENIA_APLIKACJI_H
#define LAB_8_POWIADOMIENIA_APLIKACJI_H
#pragma once
#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

class powiadomienie_obserwator {
public:
    virtual ~powiadomienie_obserwator() = default;
    virtual void aktualizuj(const std::string& wydarzenie) = 0;
};

class powiadomienie_push : public powiadomienie_obserwator {
public:
    void aktualizuj(const std::string& wydarzenie) override;
};

class powiadomienie_sms : public powiadomienie_obserwator {
public:
    void aktualizuj(const std::string& wydarzenie) override;
};

class centrum_wydarzen_podmiot {
protected:
    std::vector<powiadomienie_obserwator*> obserwatorzy;
public:
    virtual ~centrum_wydarzen_podmiot() = default;
    void dodaj_obsewatora(powiadomienie_obserwator* o);
    void usun_obsewatora(powiadomienie_obserwator* o);
    virtual void rozeslij_wiadomosc(const std::string& wiadomosc) = 0;
};

class centrum_premium : public centrum_wydarzen_podmiot {
public:
    void rozeslij_wiadomosc(const std::string& wiadomosc) override;
};

class centrum_standard : public centrum_wydarzen_podmiot {
public:
    void rozeslij_wiadomosc(const std::string& wiadomosc) override;
};

#endif
