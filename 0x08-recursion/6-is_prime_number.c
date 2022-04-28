#include "main.h"
/**
 * prime_a - main
 * @a: number
 * @b: number
 * Return: int
 */
int prime_a(int a, int b)
{
	if (a <= 1 || (a != b && a % b == 0))
	{
		return (0);
	}
	else if (a == b)
	{
		return (1);
	}
	return (prime_a(a, b + 1));
}

/**
 * is_prime_number - checks for a prime number
 * @n: number
 * Return: int
 */
int is_prime_number(int n)
{
	return (prime_a(n, 2));
}
