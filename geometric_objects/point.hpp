#include <geometric_object.hpp>
#ifndef point_t
#define point_t

template <int library>
class point : public geometric_object<library>
{
public:
	double x, y;
	static void (*draw)();
	

	point()
	{
		this->x = 0.0;
		this->y = 0.0;
	}

	point(double x, double y )
	{
		this->x = x;
		this->y = y;
	}

	void setDrawFunc (void (*func))
	{
		this->draw = func;
	}
};

template <int library>
bool operator == (const point<library>& point_1, const point<library>& point_2)
{
	return (fabs (point_1.x - point_2.x) <= 0.001) && (fabs (point_1.y - point_2.y) <= 0.001);
}
#endif
