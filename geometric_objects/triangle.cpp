#include <triangle.hpp>
#include <math.h>
#include <base_formulas.hpp>

#ifndef triangle_t
#define triangle_t

triangle::triangle()
{
	this->point_1 = point();
	this->point_2 = point();
	this->point_3 = point();
}

triangle::triangle(point point_1, point point_2, point point_3)
{
	this->point_1 = point_1;
	this->point_2 = point_2;
	this->point_3 = point_3;
}

triangle::triangle(double point_1_x, double point_1_y, double point_2_x, double point_2_y, double point_3_x, double point_3_y)
{
	this->point_1 = point(point_1_x, point_1_y);
	this->point_2 = point(point_2_x, point_2_y);
	this->point_3 = point(point_3_x, point_3_y);
}

triangle::~triangle()
{
}

triangle::draw ()
{
	this->draw = func;
}

double triangle::area ()
{
	return func_base_formulas::Area (point_1.x, point_1.y, point_2.x, point_2.y, point_3.x, point_3.y);
}
#endif
