#include "calculator.h"

Kalkulator::Kalkulator() : n(0), a(0), b(0), f(nullptr) {}

Kalkulator& Kalkulator::getInstance() {
    static Kalkulator instance;
    return instance;
}

void Kalkulator::setN(int n) { this->n = n; }
void Kalkulator::setA(double a) { this->a = a; }
void Kalkulator::setB(double b) { this->b = b; }
void Kalkulator::setFunction(std::function<double(int)> func) { f = func; }

int Kalkulator::getN() const { return n; }
double Kalkulator::getA() const { return a; }
double Kalkulator::getB() const { return b; }

double Kalkulator::calculate() {
    double h = (b - a) / n;
    double sum = 0;

    for (int i = 0; i < n; i++) {
        double x = a + (i + 1) * h;
        sum += f(static_cast<int>(x));
    }

    return sum * h;
}