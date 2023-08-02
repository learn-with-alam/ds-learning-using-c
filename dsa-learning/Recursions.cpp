#include "Recursions.h"
#include <stdio.h>

/// <summary>
/// Static varaible recursion
/// Time Complexity O(n)
/// </summary>
/// <param name="n"></param>
/// <returns></returns>
int Recursions::staticVariableRecursion(int n)
{
	static int x = 0; //static variable
	if (n > 0)
	{
		x++;
		return staticVariableRecursion(n - 1) + x;
	}
	return 0;
}

/// <summary>
/// Global variable recursion
/// Time Complexity O(n)
/// </summary>
/// <param name="n"></param>
/// <returns></returns>
int Recursions::globalVariableRecursion(int n)
{
	if (n > 0)
	{
		x++;
		return globalVariableRecursion(n - 1) + x;
	}
	return 0;
}

/// <summary>
/// Head recursion or returning time recursion
/// Time Complexity O(n)
/// </summary>
/// <param name="n"></param>
void Recursions::headRecursion(int n)
{
	if (n > 0) {
		headRecursion(n - 1);
		printf_s("%d", n);
	}
}

/// <summary>
/// Tail recursion or calling time recursion
/// Time Complexity O(n)
/// </summary>
/// <param name="n"></param>
void Recursions::tailRecursion(int n)
{
	if (n > 0) {
		printf_s("%d", n);
		tailRecursion(n - 1);
	}
}

/// <summary>
/// Tree Recursion 
/// Time Complexity O(2^n)
/// </summary>
/// <param name="n"></param>
void Recursions::treeRecursion(int n)
{
	if (n > 0) {
		printf_s("%d ", n);
		treeRecursion(n - 1);
		treeRecursion(n - 1);
	}
}

int Recursions::nestedRecursion(int n)
{
	if (n > 100)
		return n - 10;
	else
		return nestedRecursion(nestedRecursion(n + 11));
}


