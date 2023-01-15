#include "main.h"
#include <stdlib.h>

/**
 * array_range - arrays from min to max
 * @min: int param
 * @max: int param
 * Return: pointer to the array
 */
int *array_range(int min, int max)
{
	int *arry;
	int index, size;


	if (min > max)
		return (NULL);

	size = max - min + 1;
	arry = malloc(sizeof(int) * size);

	if (arry == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
		arry[index] = min++;

	return (arry);
}
