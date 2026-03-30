#include <iostream>
#include "calculator.h"

using namespace std;

int main() {
    auto& calc = Kalkulator::getInstance();

    calc.setA(1);
    calc.setB(2);
    calc.setN(1);

    calc.setFunction([](int x) {
        return x * x;
    });

    cout << calc.calculate() << endl;

    return 0;
}