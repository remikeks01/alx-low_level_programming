#include <stdio.h>

/**
 * main - program that prints number of arguments
 * argc: is a counter of argument for int
 * @argv: is a counter of value
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void)argv;

	printf("%\n", (argc - 1));

	return (0);
}
