#include "lists.h"

/**
 * list_len -> returns the num of elements of a list
 * @h: the head pointer to the address of node
 * Return: int
 */
size_t list_len(const list_t *h)
{
	size_t i;

	i = 0;
	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
