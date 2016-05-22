#include <geometric_object.hpp>
#ifndef segment_t
#define segment_t

template <const char* library>
class segment : public geometric_object<library>
{
public:
	point<library> A, B;
	static void (*draw)();
	
	segment();
	segment(double, double);
	~segment();
	void setDrawFunc (void (*)());
};
#endif
