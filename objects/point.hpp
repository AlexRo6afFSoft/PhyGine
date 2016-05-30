#ifndef point_t

class point
{
public:
    double x, y;

    point();
    point(double, double);
    double distance(point&);
};

double distance(point&, point&);

bool operator == (const point&, const point&);

#endif
