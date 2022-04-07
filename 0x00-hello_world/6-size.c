#include <stdio.h>

/**
 * main
 *
 * Return: Alwways 0 (Success)
 */
int main(void)
{
	printf("Size of a char: %ld byte(s)\n", sizeof(char));
	printf("Size of an int: %ld byte(s)\n", sizeof(int));
	printf("Size of a long int: %ld byte(s)\n", sizeof(long int));
	printf("Size of a float: %ld byte(s)\n", sizeof(float));
	printf("Size of a double: %ld byte(s)\n", sizeof(double));
	return (0);
}
