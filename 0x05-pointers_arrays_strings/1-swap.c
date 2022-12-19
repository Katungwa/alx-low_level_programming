#include "main.h"

/**
 * swap_int: swaps the values of two integers
 * int *a: The value in address pointed should be swapped
 * int *b: value to be swapped with the value in the address
 * return: void
 */
void swap_int(int *a, int *b)
{
	int *n;

	n = a;
	a = *b;
	b = *n;
}
