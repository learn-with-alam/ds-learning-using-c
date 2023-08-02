#include "TowerOfHanoi.h"
#include "stdio.h"

void TowerOfHanoi::TOH(int n, int a, int b, int c)
{
	if (n > 0) {
		TOH(n - 1, a, c, b);
		printf_s("(from %d to %d) \n", a, c);
		TOH(n - 1, b, a, c);
	}
}
