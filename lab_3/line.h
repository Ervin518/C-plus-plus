#ifndef LINE_H
#define LINE_H
#include "point.h"

class Line {
private:
    Point points[2];

public:
    Line(Point p1, Point p2);
    Point* getPoints();
};

#endif