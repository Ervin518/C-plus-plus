#ifndef LAB_8_APLIKACJA_SPORTOWA_H
#define LAB_8_APLIKACJA_SPORTOWA_H

#pragma once
#include <string>
#include <iostream>

class pilka_nozna {
public:
    virtual ~pilka_nozna() = default;
    virtual std::string pobierz_wynik() = 0;
};

class hokej {
public:
    virtual ~hokej() = default;
    virtual std::string pobierz_wynik() = 0;
};

class siatkowka {
public:
    virtual ~siatkowka() = default;
    virtual std::string pobierz_wynik() = 0;
};

class pilka_nozna_Bialorus : public pilka_nozna {
public:
    std::string pobierz_wynik() override;
};

class hokej_Bialorus : public hokej {
public:
    std::string pobierz_wynik() override;
};

class siatkowka_Bialorus : public siatkowka {
public:
    std::string pobierz_wynik() override;
};

class pilka_nozna_Rosja : public pilka_nozna {
public:
    std::string pobierz_wynik() override;
};

class hokej_Rosja : public hokej {
public:
    std::string pobierz_wynik() override;
};

class siatkowka_Rosja : public siatkowka {
public:
    std::string pobierz_wynik() override;
};

class pilka_nozna_Ukraina : public pilka_nozna {
public:
    std::string pobierz_wynik() override;
};

class hokej_Ukraina : public hokej {
public:
    std::string pobierz_wynik() override;
};

class siatkowka_Ukraina : public siatkowka {
public:
    std::string pobierz_wynik() override;
};

class fabryka_sportowa {
public:
    virtual ~fabryka_sportowa() = default;
    virtual pilka_nozna* stworz_pika_nozna() = 0;
    virtual hokej* stworz_hokej() = 0;
    virtual siatkowka* stworz_siatkowka() = 0;
};

class fabryka_Bialorus : public fabryka_sportowa {
public:
    pilka_nozna* stworz_pika_nozna() override;
    hokej* stworz_hokej() override;
    siatkowka* stworz_siatkowka() override;
};

class fabryka_Rosja : public fabryka_sportowa {
public:
    pilka_nozna* stworz_pika_nozna() override;
    hokej* stworz_hokej() override;
    siatkowka* stworz_siatkowka() override;
};

class fabryka_Ukraina : public fabryka_sportowa {
public:
    pilka_nozna* stworz_pika_nozna() override;
    hokej* stworz_hokej() override;
    siatkowka* stworz_siatkowka() override;
};

#endif