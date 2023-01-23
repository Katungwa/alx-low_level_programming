#include "function_pointers.h"

/**
 * int_index - searches for an integer in an array
 * @array: array param
 * @size: num of elements in the array
 * @cmp: pointer to func that compares values
 * Return :ndex of first element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int ptr;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		ptr = cmp(array[i]);
		if (ptr)
			return (i);
	}
	return (-1);
}
