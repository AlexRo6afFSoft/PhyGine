#ifndef point_t

#include "point.hpp"
#include "defines.cpp"
#include <math.h>

point::point()
{
    this->x = 0.0;
    this->y = 0.0;
}

point::point(double x, double y)
{
    this->x = x;
    this->y = y;
}

double point::distance(point &p1)
{
    double distance_x = abs(this->x - p1.x);
    double distance_y = abs(this->y - p1.y);
    return sqrt((distance_x * distance_x) + (distance_y * distance_y));
}

double distance(point &p1, point &p2)
{
    return p1.distance(p2);
}

bool operator==(point &point_1, point &point_2)
{
    return (abs(point_1.x - point_2.x) <= EPSILON) && (abs(point_1.y - point_2.y) <= EPSILON);
}

#define point_t
#endif
