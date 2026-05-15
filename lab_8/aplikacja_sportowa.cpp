#include "aplikacja_sportowa.h"

std::string pilka_nozna_Bialorus::pobierz_wynik() { return "[Wyszejszaja Liha]: Neman Grodno 2 - 0 Dinamo Minsk!"; }
std::string hokej_Bialorus::pobierz_wynik() { return "[Ekstraliga]: Junost Minsk 1 - 3 Neman Grodno"; }
std::string siatkowka_Bialorus::pobierz_wynik() { return "[Siatkowka BLR]: Szachcior Soligorsk 3 - 0 Legion Obukhovo"; }

std::string pilka_nozna_Rosja::pobierz_wynik() { return "[RPL]: Spartak Moskwa 1 - 1 Zenit"; }
std::string hokej_Rosja::pobierz_wynik() { return "[KHL]: CSKA Moskwa 4 - 2 SKA"; }
std::string siatkowka_Rosja::pobierz_wynik() { return "[Superliga RU]: Zenit Kazan 3 - 1 Dinamo Moskwa"; }

std::string pilka_nozna_Ukraina::pobierz_wynik() { return "[UPL]: Dynamo Kijow 2 - 1 Szachtar Donieck"; }
std::string hokej_Ukraina::pobierz_wynik() { return "[UHL]: Sokol Kijow 5 - 3 Donbass"; }
std::string siatkowka_Ukraina::pobierz_wynik() { return "[Superliha UA]: Epicentr-Podolany 3 - 2 Prometey"; }

pilka_nozna* fabryka_Bialorus::stworz_pika_nozna() { return new pilka_nozna_Bialorus(); }
hokej* fabryka_Bialorus::stworz_hokej() { return new hokej_Bialorus(); }
siatkowka* fabryka_Bialorus::stworz_siatkowka() { return new siatkowka_Bialorus(); }

pilka_nozna* fabryka_Rosja::stworz_pika_nozna() { return new pilka_nozna_Rosja(); }
hokej* fabryka_Rosja::stworz_hokej() { return new hokej_Rosja(); }
siatkowka* fabryka_Rosja::stworz_siatkowka() { return new siatkowka_Rosja(); }

pilka_nozna* fabryka_Ukraina::stworz_pika_nozna() { return new pilka_nozna_Ukraina(); }
hokej* fabryka_Ukraina::stworz_hokej() { return new hokej_Ukraina(); }
siatkowka* fabryka_Ukraina::stworz_siatkowka() { return new siatkowka_Ukraina(); }