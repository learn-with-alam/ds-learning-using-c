#include "FibonacciSeries.h"

int FibonacciSeries::fib(int n)
{
    if (n <= 1)
        return n;

    return fib(n - 2) + fib(n - 1);
}

int FibonacciSeries::fibMemorize(int n)
{
    if (n <= 1)
    {
        f[n] = n;
        return n;
    }
    else
    {
        if (f[n - 2] == -1)
            f[n - 2] = fibMemorize(n - 2);

        if (f[n - 1] == -1)
            f[n - 1] = fibMemorize(n - 1);

        return  f[n - 2] + f[n - 1];
    }

}
