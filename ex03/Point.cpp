

#include "Point.hpp"

Point::Point() : x(0), y(0) {
    std::cout << "Default constructor called" << std::endl;
}

Point::Point(const float x, const float y) : x(x), y(y) {
    std::cout << "Parametric constructor called" << std::endl;
}

Point::Point(const Point& other) : x(other.x), y(other.y) {
    std::cout << "Copy constructor called" << std::endl;
}

Point& Point::operator=(const Point& other) {
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other) {
        std::cerr << "Warning: Attempt to assign to a Point object. Operation ignored." << std::endl;
    }
    return *this;
}

Point::~Point() {
    std::cout << "Destructor called" << std::endl;
}

Fixed Point::getX() const {
    return this->x;
}

Fixed Point::getY() const {
    return this->y;
}
