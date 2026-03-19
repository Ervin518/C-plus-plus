#include "square.h"
#include <cmath>

Square::Square(std::vector<Line> l) : Rectangle(l) {}

float Square::calcArea() {
    std::vector<Line> l = getLines();
    if (l.empty()) return 0;

    Point* p = l[0].getPoints();
    float a = std::sqrt((p[1].getX() - p[0].getX()) * (p[1].getX() - p[0].getX()) + (p[1].getY() - p[0].getY()) * (p[1].getY() - p[0].getY()));
    return a * a;
}

float Square::calcCircum() {
    std::vector<Line> l = getLines();
    if (l.empty()) return 0;

    Point* p = l[0].getPoints();
    float a = std::sqrt((p[1].getX() - p[0].getX()) * (p[1].getX() - p[0].getX()) + (p[1].getY() - p[0].getY()) * (p[1].getY() - p[0].getY()));
    return 4 * a;
}