#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memmory and returns a pointer to the memory
 * @nmemb: int param
 * @size: size in bytes of each member
 * Return: pointer to memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *space;
	unsigned int index;

	if (nmemb == 0 || size == 0)
		return (NULL);

	space = malloc(nmemb * size);
	if (space == NULL)
		return (NULL);

	for (index = 0; space[index]; index++)
		space[index] = '\0';

	return (space);
}
