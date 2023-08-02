#include "SumOfNNumburs.h"

int SumOfNNumburs::SumUsingRecursion(int n)
{
	if (n == 0)
		return 0;
	return SumUsingRecursion(n - 1) + n;
}
