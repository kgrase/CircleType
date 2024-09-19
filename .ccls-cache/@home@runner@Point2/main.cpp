#include <iostream>
#include <cmath>


#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

#include "PointType.h"
#include "CircleType.h"

int main() {

    PointType<int> p1(3, 4);
    PointType<int> p2(6, 8);

cout << "Distance between P1 and P2: " << p1 - p2 << endl;

    return 0;
}

 void printCircle() const {
        cout << "Radius: " << radius << endl;
        cout << "Circumference: " << circumference() << endl;
        cout << "Area of base: " << area() << endl;
    }
};