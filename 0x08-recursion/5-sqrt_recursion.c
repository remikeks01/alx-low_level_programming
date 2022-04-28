#include "main.h"
/**
 * sqrt_a - check the code
 * @a: number
 * @b: number
 * Return: int
 */

int sqrt_a(int a, int b)
{
	if (b * b == a)
	{
		return (b);
	}
	else if (b * b > a)
	{
		return (-1);
	}
	return (sqrt_a(a, b+1));
}

/**
 * _sqrt_recursion - prints square root
 * @n: number
 * Return: int
 */
int _sqrt_recursion(int n)
{
	return (sqrt_a(n, 0));
}
