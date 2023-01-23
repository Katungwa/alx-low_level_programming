#include "function_pointers.h"

/**
 * int_index -> returns index position of matching element
 * @array: array param
 * @size: num of elements in the array
 * @cmp: pointer to func that compares values
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int ptr;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		ptr = cmp(array[i]);
		if (ptr)
			return (i);
	}
	return (-1);
}
