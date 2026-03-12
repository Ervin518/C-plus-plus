#include "line.h"
#include <cmath>

Line::Line() {
    p1 = Point(0,0);
    p2 = Point(0,0);
}

Line::Line(Point a, Point b) {
    p1 = a;
    p2 = b;
}

void Line::setP1(Point a) {
    p1 = a;
}

void Line::setP2(Point b) {
    p2 = b;
}

Point Line::getP1() const {
    return p1;
}

Point Line::getP2() const {
    return p2;
}

double Line::length() const {
    double dx = p2.getX() - p1.getX();
    double dy = p2.getY() - p1.getY();
    return sqrt(dx*dx + dy*dy);
}