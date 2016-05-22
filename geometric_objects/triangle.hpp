#include <geometric_object.hpp>
#include <point.cpp>
#include <math.h>
#include <base_formulas.hpp>

#ifndef triangle_t
#define triangle_t
template <int library>
class triangle : public	 geometric_object<library>
{
private:
	point<library> point_1, point_2, point_3;
public:
	triangle()
	{
		this->point_1 = point<library>();
		this->point_2 = point<library>();
		this->point_3 = point<library>();
	}
	triangle(double point_1_x, double point_1_y, double point_2_x, double point_2_y, double point_3_x, double point_3_y)
	{
		this->point_1 = point<library>(point_1_x, point_1_y);
		this->point_2 = point<library>(point_2_x, point_2_y);
		this->point_3 = point<library>(point_3_x, point_3_y);
	}
	void draw ()
	{
	}
	double area ()
	{
		return func_base_formulas::Area (point_1.x, point_1.y, point_2.x, point_2.y, point_3.x, point_3.y);
	}
};
#endif
