#ifndef segment_t

#include "segment.hpp"
#include "defines.cpp"
#include <math.h>

segment::segment()
{
    this->a = point();
    this->b = point();
}

segment::segment(point a, point b)
{
    this->a = a;
    this->b = b;
}

segment::segment(double x_1, double y_1, double x_2, double y_2)
{
    this->a = point(x_1, y_1);
    this->b = point(x_2, y_2);
}

double segment::length()
{
    return distance(this->a, this->b);
}

bool operator==(segment &a, segment &b)
{
    return abs(a.length() - b.length()) < EPSILON;
}

bool operator!=(segment &a, segment &b)
{
    return !(a == b);
}

bool operator<(segment &a, segment &b)
{
    return a.length() < b.length();
}

bool operator>(segment &a, segment &b)
{
    return a.length() > b.length();
}

bool areColiding(segment &a, segment &b)
{
}

#define segment_t
#endif
