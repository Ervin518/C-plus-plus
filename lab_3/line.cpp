#include "line.h"

Line::Line(Point p1, Point p2) : points{p1, p2} {
}

Point* Line::getPoints() {
    return points;
}