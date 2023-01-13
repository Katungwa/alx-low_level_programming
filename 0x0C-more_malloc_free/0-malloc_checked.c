#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Dynamic memory allocation
 * @b: unsigned int param
 * Return: pointer to alloc mem
 */
void *malloc_checked(unsigned int b)
{
	void *m;

	m = malloc(b);
	if (m == NULL)
		exit(98);
	return (m);
}
