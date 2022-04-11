#include <stdio.h>

/**
 * main - Prints all single digits of base 10
 * numbers starting from 0
 * with putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	for (n = 48; n <58; n++)
		putchar(n);
	putchar('\n');
	return (0);
}
