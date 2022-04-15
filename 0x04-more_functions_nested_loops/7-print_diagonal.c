#include "main.h"

/**
 * print_diagonal - Function that drawas a diagonal line
 * in the terminal
 * @n: An input integer
 * Return: 0
 */
void print_diagonal(int n)
{
	int i = 0, j;

	if (n > 0)
	{
		for (; i < n; i++)
		{
			for(j = 0; j < 1; j++)
				_putchar(' ');
		_putchar(92);
		_putchar('\n');
		}
	}
	else
		_putchar('\n');
}

