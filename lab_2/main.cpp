#include <iostream>
#include "line.h"

using namespace std;

int main() {
    Line *l1 = new Line(Point(1, 2), Point(4, 6));
    cout << "Length = " << l1->length() << endl;
    delete l1;

    Line *l2 = new Line(Point(0, 0), Point(3, 4));
    cout << "Length = " << l2->length() << endl;
    delete l2;

    return 0;
}