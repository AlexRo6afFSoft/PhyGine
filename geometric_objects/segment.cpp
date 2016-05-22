#include <geometric_object.hpp>
#include <point.hpp>
#ifndef segment_t
#define segment_t

template <int library>
class segment : public geometric_object<library>
{
public:
	point<library> A, B;
	static void (*draw)();
	
	segment()
	{
		this->A = point ();
		this->B = point ();
	}

	segment(point A, point B)
	{
		this->A = A;
		this->B = B;
	}

	void setDrawFunc (void (*func))
	{
		this->draw = func;
	}
	
	bool operator == (const segment<library>& segment_1, const segment<library>& segment_2) const
	{
		return 
			(segment_1.A == segment_2.A && segment_1.B == segment_2.B) or
			(segment_1.A == segment_2.B && segment_1.B == segment_2.A)
			;
	}
};
#endif
