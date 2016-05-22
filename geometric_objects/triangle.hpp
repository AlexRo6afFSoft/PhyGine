#include <geometric_object.hpp>
#include <point.cpp>
#include <string>

#ifndef triangle_t
#define triangle_t
template <const char* library>
class triangle : public	 geometric_object<library>
{
private:
	point<library> point_1, point_2, point_3;
public:
	triangle();
	triangle(point<library>, point<library>, point<library>);
	triangle(double, double, double, double, double, double);
	~triangle();
	double area();
};
#endif
