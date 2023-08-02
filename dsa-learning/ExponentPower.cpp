#include "ExponentPower.h"

double ExponentPower::Pow(double x, int n)
{
	if (n == 0)
		return 1;

	return Pow(x, n - 1) * x;
}
