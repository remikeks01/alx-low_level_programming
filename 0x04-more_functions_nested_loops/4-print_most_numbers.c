#include "main.h"

/**
 * print_most_numbers - function that prints numbers
 * from 0 - 9, excluding 2 and 4
 * Return: 0
 */
void print_most_numbers(void)
{
	int i = '0';

	for (; i<= '9'; i++)
	{
		if (i != '2' && i != '4')
			_putchar(i);
	}
	_putchar('\n');
}
