#include "main.h"
/**
 * _strlen_recursion - returns length of string
 * @s: character of string
 * Return: int
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + strlen_recursion(s + 1));
	}
	return (0);
}
