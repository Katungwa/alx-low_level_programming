#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Dynamic memory allocation
 * @b: unsigned int param
 * Return: pointer to alloc mem
 */
void *malloc_checked(unsigned int b)
{
	int *m;

	m = malloc(sizeof(b));
	if (m == NULL)
		free(m);
		exit[98];
	return (m);
}
