#ifndef POINT_H
#define POINT_H

class Point {
private:
    double x;
    double y;

public:
    Point();
    Point(double x, double y);

    void setX(double x);
    void setY(double y);

    double getX() const;
    double getY() const;
};

#endif