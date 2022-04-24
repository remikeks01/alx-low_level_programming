#include "main.h"
/**
 * puts2 - prints every other character of a string
 * @str: pointer to the string
 * Return: void
 */
void puts2(char *str)
{
	int len;
	char l;

	for (len = 0; *(str + len) != 0; len++)
	{
		if (len % 2 == 0)
		{
			l = *(str + len);
			_putchar(l);
		}
	}
	_putchar('\n');
}
