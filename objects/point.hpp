#ifndef point_t

class point
{
public:
    double x, y;

    point();
    point(double x, double y );
};

bool operator == (const point&, const point&);

#endif
