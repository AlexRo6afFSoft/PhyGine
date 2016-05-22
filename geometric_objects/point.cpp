#include <point.hpp>
#include <math.h>

#ifndef point_t
#define point_t

point::point()
{
	this->x = 0.0;
	this->y = 0.0;
}

point::point(double x, double y )
{
	this->x = x;
	this->y = y;
}

point::~point()
{
}

point::setDrawFunc (void (*func))
{
	this->draw = func;
}

bool operator == (const point& point_1, const point& point_2)
{
	return (fabs (point_1.x - point_2.x) <= 0.001) && (fabs (point_1.y - point_2.y) <= 0.001);
}
#endif
