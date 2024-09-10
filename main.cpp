#include <iostream>
#include "PointType.h"
int main() {

    PointType<int> p1(3, 4);
    PointType<int> p2(6, 8);

cout << "Distance between P1 and P2: " << p1 - p2 << endl;

    return 0;
}