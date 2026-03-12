#ifndef LINE_H
#define LINE_H

#include "point.h"

class Line {
private:
    Point p1;
    Point p2;

public:
    Line();
    Line(Point a, Point b);

    void setP1(Point a);
    void setP2(Point b);

    Point getP1() const;
    Point getP2() const;

    double length() const;
};
#endif