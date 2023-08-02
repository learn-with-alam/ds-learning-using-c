#include "TailorSeries.h"

double TailorSeries::calculateSeries(int x, int n)
{
    static double p = 1, f = 1;
    double r;
    if (n == 0)
        return 1;
   
    r = calculateSeries(x, n - 1);
    p *= x;
    f *= n;
    return r + (p / f);
}

double TailorSeries::calculateByHornersRule(int x, int n)
{
    static double s = 1;
    if (n == 0)
        return s;

    s = 1 + x * s / n;
    return calculateByHornersRule(x, n - 1);
}
