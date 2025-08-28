//
// Created by tomjo on 28/08/2025.
//

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

class Point {
	private:
    	Fixed const x;
    	Fixed const y;
	public:
    	Point();
    	Point(const float x, const float y);
    	Point(const Point& other);
    	Point& operator=(const Point& other);
    	~Point();
		Fixed getX() const;
    	Fixed getY() const;
};



#endif //POINT_HPP
