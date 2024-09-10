#include <iostream>
#include <cmath>

using namespace std;


template <typename T>
class PointType {
private:
    T x;
    T y;

public:
    // default constructor
    PointType() : x(0), y(0) {}

    // constructor with parameters
    PointType(T x, T y) : x(x), y(y) {}

    // setters
    void setX(T x) {
        this->x = x;
    }

    void setY(T y) {
        this->y = y;
    }

    // getters
    T getX() const {
        return x;
    }

    T getY() const {
        return y;
    }

    //function to calculate distance to another point
    double distanceTo(const PointType<T>& other) const {
        return std::sqrt(std::pow(x - other.x, 2) + pow(y - other.y, 2));
    }

    // Overload the subtraction operator to return the distance between two points
    double operator-(const PointType<T>& other) const {
        return distanceTo(other);
    }
};

