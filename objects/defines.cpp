#ifndef EPSILON

#define EPSILON 0.001

#endif

#ifndef oriented_face

double oriented_face(double x1, double y1, double x2, double y2, double x3, double y3)
{
    return ((y1 - y2) * (x1 + x2) + (y2 - y3) * (x2 + x3) - (y1 - y3) * (x1 + x3)) / 2;
}

#define oriented_face
#endif
