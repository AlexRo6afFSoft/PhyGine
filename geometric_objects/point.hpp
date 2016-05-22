#include <geometric_object.hpp>
#ifndef point_t
#define point_t

template <const char* library>
class point : public geometric_object<library>
{
public:
	double x, y;
	static void (*draw)();
	
	point();
	point(double, double);
	~point();
	void setDrawFunc (void (*)());
};
#endif
