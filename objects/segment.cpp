#ifndef segment_t

#include "segment.hpp"
#include <math.h>

segment::segment()
{
    this->a = point ();
    this->b = point ();
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

bool operator ==(const segment& s1, const segment& s2)
{
    return s1.length() == s2.length();
}

bool operator !=(const segment& s1, const segment& s2)
{
    return !(s1 == s2);
}

bool operator <(const segment& s1, const segment& s2)
{
    return s1.length() < s2.length();
}

bool operator >(const segment& s1 , const segment& s2)
{
    return s1.length() > s2.length();
}

bool areColiding(const segment& s1, const segment& s2)
{
}

#define segment_t
#endif
