#ifndef ZAD_5_CALCULATOR_H
#define ZAD_5_CALCULATOR_H

#include <functional>

class Kalkulator {
private:
    int n;
    double a, b;
    std::function<double(int)> f;
    static Kalkulator* instance;
    Kalkulator();

public:
    static Kalkulator& getInstance();
    static bool isInitialized() { return instance != nullptr; }
    void setN(int n);
    void setA(double a);
    void setB(double b);
    void setFunction(std::function<double(int)> func);

    int getN() const;
    double getA() const;
    double getB() const;

    double calculate();
};
#endif //ZAD_5_CALCULATOR_H
