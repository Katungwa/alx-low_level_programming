#include "function_pointers.h"

/**
 * int_index - searches for an int
 * @array: array to be searched
 * @cmp: pointer to func
 * @size: number of elements
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return(-1);

	for (i = 0; i < size; size++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
