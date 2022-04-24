#include "main.h"
/**
 * print_rev - prints string in reverse
 * @s: pointer to the string
 * Return: void
 */
void print_rev(char *s)
{
	int l;

	l = 0;
	while (*(s + l) != '\0')
		l++;
	l--;
	for (; l >= 0; l--)
		_putchar(*(s + l));
	_putchar('\n');
}
