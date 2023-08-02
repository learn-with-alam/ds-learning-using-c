#include "Factorial.h"

int Factorial::Calculate(int n)
{
    if(n == 0 || n == 1)
        return 1;
    return Calculate(n - 1) * n;
}
