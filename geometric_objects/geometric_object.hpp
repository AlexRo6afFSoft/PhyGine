#ifndef geometric_object_t
#define geometric_object_t

template <const char* library>
/*abstract*/ class geometric_object
{
public:
	virtual void draw ();
};
#endif
