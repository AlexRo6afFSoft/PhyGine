#ifndef segment_t

#include <point>

class segment
{
public:
    point a, b;

    segment();
    segment(point, point);
    segment(double, double, double, double);
};

bool operator ==(const segment&, const segment&);

#endif
