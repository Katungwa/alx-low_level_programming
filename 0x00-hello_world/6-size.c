#include <stdio.h>

/**
 * main - Entry point
 *
 * Desription : C program that prints the size of various types
 *
 * Return: Always 0 (Succesful)
 */

int main(void)
{
	/*sizeof evaluates the size of variables */
	printf("Size of a char: %zu byte(s)\n", sizeof(char));
	printf("Size of an int: %zu byte(s)\n", sizeof(int));
	printf("Size of a long int: %zu byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(long long int));
	printf("Size of a float: %zu byte(s)\n", sizeof(float));

	return (0);
}

