#include "function_pointers.h"

/**
 * array_iterator - executes a func give as a param 
 * @size: array size
 * @action: pointer to the func to be used
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;


	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
