#include "rectangle.h"
#include <cmath>

Rectangle::Rectangle(std::vector<Line> l) {
    setLines(l);
}

float Rectangle::calcArea() {
    std::vector<Line> l = getLines();
    if (l.size() < 2) return 0;

    Point* p1 = l[0].getPoints();
    float len1 = std::sqrt((p1[1].getX() - p1[0].getX()) * (p1[1].getX() - p1[0].getX()) + (p1[1].getY() - p1[0].getY()) * (p1[1].getY() - p1[0].getY()));

    Point* p2 = l[1].getPoints();
    float len2 = std::sqrt((p2[1].getX() - p2[0].getX()) * (p2[1].getX() - p2[0].getX()) + (p2[1].getY() - p2[0].getY()) * (p2[1].getY() - p2[0].getY()));

    return len1 * len2;
}

float Rectangle::calcCircum() {
    std::vector<Line> l = getLines();
    float sum = 0;
    for (size_t i = 0; i < l.size(); ++i) {
        Point* p = l[i].getPoints();
        sum += std::sqrt((p[1].getX() - p[0].getX()) * (p[1].getX() - p[0].getX()) + (p[1].getY() - p[0].getY()) * (p[1].getY() - p[0].getY()));
    }
    return sum;
}