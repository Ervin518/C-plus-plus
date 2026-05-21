#include <iostream>
#include <string>

class Grodno {
private:
    int *nations;
    int population;
    std::string name;

    int nations_count;
public:
    Grodno(std::string n, int pop, int count) : name(n), population(pop), nations_count(count) {
        nations = new int [nations_count];
        for (int i = 0; i < nations_count; ++i) {
            nations[i] = 0;
        }
    }

    Grodno(const Grodno& other) : name(other.name), population(other.population), nations_count(other.nations_count) {
        nations = new int [nations_count];
        for (int i = 0; i < nations_count; ++i) {
            nations[i] = other.nations[i];
        }
    }

    virtual ~Grodno() {
        delete[] nations;
    }

    Grodno& operator=(const Grodno& other) {
        if (this == &other) {
            return *this;
        }

        delete[] nations;

        name = other.name;
        population = other.population;
        nations_count = other.nations_count;

        nations = new int [nations_count];
        for (int i = 0; i < nations_count; ++i) {
            nations[i] = other.nations[i];
        }

        return *this;
    }

    friend void write_city(const Grodno& city);
};

void write_city(const Grodno& city) {
    std::cout << "City: " << city.name << " | Population: " << city.population << "\n";
    std::cout << "Nations: [ ";
    for(int i = 0; i < city.nations_count; ++i) {
        std::cout << city.nations[i] << " ";
    }
    std::cout << "]\n\n";
}

int main() {
    std::cout << "1) Konstruktor standardowy: \n";
    Grodno my_city("Grodno", 370000, 7);
    write_city(my_city);

    std::cout << "2) Konstruktor kopiujacy: \n";
    Grodno copy_city = my_city;
    write_city(copy_city);

    std::cout << "3) Operator =: \n";
    Grodno different_city("Bialystok", 290000, 5);
    std::cout << "Przed przepisaniem: \n";
    write_city(different_city);

    different_city = my_city;
    std::cout << "Po przepisaniu: \n";
    write_city(different_city);

    return 0;
}

