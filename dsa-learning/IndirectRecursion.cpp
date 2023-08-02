#include "IndirectRecursion.h"
#include <stdio.h>

void IndirectRecursion::funA(int n)
{
	if (n > 0) {
		printf_s("%d ", n);
		funB(n - 1);
	}
}

void IndirectRecursion::funB(int n)
{
	if (n > 1) {
		printf_s("%d ", n);
		funA(n / 2);
	}
}
