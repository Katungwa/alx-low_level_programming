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
	int index;


	if (min > max)
		return (NULL);

	arry = malloc(sizeof(int) * ((max - min) + 1));

	for (index = 0; index <= ((max - min ) + 1); index++)
		arry[index] = min++;

	return (arry);
}
