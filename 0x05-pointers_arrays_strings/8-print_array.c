#include "main.h"
#include <string.h>

/**
 * print_array - prints a certain number of elem in an array
 * @a: The array to be manipulated
 * @n: number of elements to be printed
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		printf(",");
		printf(" ");
	}
	putchar('\n');
}
