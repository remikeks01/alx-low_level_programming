#include "main.h"
/**
 * long_1 - main
 * @s: number
 *
 * Return: int
 */
int long_1(char *s)
{
	if (*s != '\0')
	{
		return (1 + long_1(s + 1));
	}
	return (0);
}
/**
 * compare - compare code
 * @s: number
 * @l: number
 * Return: int
 */
int compare(char *s, int l)
{
	if (l <= 0)
	{
		return (1);
	}
	if (*s == *(s + (l - 1)))
	{
		return (compare(s + 1, l - 2));
	}
	else
	{
		return (0);
	}
}

/**
 * is_palindrome - checks if string is a palindrome
 * @s: character
 * Return: int
 */
int is_palindrome(char *s)
{
	int l;

	l = long_1(s);
	return (compare(s, l));
}
