//
// Created by tomjo on 26/08/2025.
//

#include "Point.hpp"
#include <iostream>
#include <cmath>


bool bsp( Point const a, Point const b, Point const c, Point const point) {
    Fixed area_abc = ((a.getX() * (b.getY() - c.getY())) + (b.getX() * (c.getY() - a.getY())) + (c.getX() * (a.getY() - b.getY()))).toFloat();
    if (area_abc < 0)
        area_abc = area_abc * -1;
    Fixed area_abp = ((a.getX() * (b.getY() - point.getY())) + (b.getX() * (point.getY() - a.getY())) + (point.getX() * (a.getY() - b.getY()))).toFloat();
    if (area_abp < 0)
        area_abp = area_abp * -1;
    Fixed area_acp = ((a.getX() * (point.getY() - c.getY())) + (point.getX() * (c.getY() - a.getY())) + (c.getX() * (a.getY() - point.getY()))).toFloat();
    if (area_acp < 0)
        area_acp = area_acp * -1;
    Fixed area_bcp = ((point.getX() * (b.getY() - c.getY())) + (b.getX() * (c.getY() - point.getY())) + (c.getX() * (point.getY() - b.getY()))).toFloat();
    if (area_bcp < 0)
        area_bcp = area_bcp * -1;
    return (area_abc == area_abp + area_acp + area_bcp && area_abp != 0 && area_acp != 0 && area_bcp != 0);
}