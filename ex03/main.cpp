//
// Created by tomjo on 28/08/2025.
//

#include "Fixed.hpp"
#include "Point.hpp"
#include <iostream>
#include <cmath>


int main() {
    Point a(0, 0);
    Point b(10, 30);
    Point c(20, 0);

    Point p(10, 15);
    Point q(30, 15);
    Point r(10, 0);

    std::cout << "Point p is " << (bsp(a, b, c, p) ? "inside" : "outside") << " the triangle abc." << std::endl;
    std::cout << "Point q is " << (bsp(a, b, c, q) ? "inside" : "outside") << " the triangle abc." << std::endl;
    std::cout << "Point r is " << (bsp(a, b, c, r) ? "inside" : "outside") << " the triangle abc." << std::endl;

    return 0;
}