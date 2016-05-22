#ifndef base_formulas_t
#define base_formulas_t

namespace func_base_formulas
{
	double Area (double dX0, double dY0, double dX1, double dY1, double dX2, double dY2)
	{
		double dArea = ((dX1 - dX0) * (dY2 - dY0) - (dX2 - dX0) * (dY1 - dY0)) / 2.0;
		return (dArea > 0.0) ? dArea : -dArea;
	}
	
}
#endif
