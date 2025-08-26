//
// Created by tomjo on 26/08/2025.
//

#ifndef POINT_HPP
#define POINT_HPP



class Point {
    private:
        Fixed const x;
        Fixed const y;
    public:
        Point();
        Point(const Point& other);
        Point& operator=(const Point& other);
        ~Point();
        Point(float const xValue, float const yValue);
};



#endif //POINT_HPP
