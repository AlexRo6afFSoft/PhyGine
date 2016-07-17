#ifndef segment_t

#include <point>

class segment
{
  public:
    point a, b;

    segment();
    segment(point, point);
    segment(double, double, double, double);
    double length();
};

bool areColiding(segment &, segment &);

bool operator==(segment &, segment &);
bool operator!=(segment &, segment &);
bool operator<(segment &, segment &);
bool operator>(segment &, segment &);
#endif
