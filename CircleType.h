#ifndef CIRCLETYPE_H
#define CIRCLETYPE_H

#include "PointType.h"
#include <cmath>

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

class CircleType : public PointType {
private:
    double radius;
    PointType pointOnCircumference;

public:
    CircleType(double x = 0.0, double y = 0.0, double px = 0.0, double py = 0.0)
        : PointType(x, y), pointOnCircumference(px, py) {
        radius = calculateRadius();
    }

    void setCenter(double x, double y) {
        setPoint(x, y);
        radius = calculateRadius();  // to recalculate radius if needed
    }