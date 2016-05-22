#include <segment.hpp>
#include <math.h>

#ifndef segment_t
#define segment_t

segment::segment()
{
	this->A = point ();
	this->B = point ();
}

segment::segment(point A, point B)
{
	this->A = A;
	this->B = B;
}

segment::~segment()
{
}

segment::setDrawFunc (void (*func))
{
	this->draw = func;
}

template <std::string library>
bool operator == (const segment<library>& segment_1, const segment<library>& segment_2) const
{
	return 
		(segment_1.A == segment_2.A && segment_1.B == segment_2.B) or
		(segment_1.A == segment_2.B && segment_1.B == segment_2.A)
		;
}
#endif
