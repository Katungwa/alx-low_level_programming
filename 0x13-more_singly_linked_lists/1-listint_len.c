#include "lists.h"

/**
 * listint_len - returns num of elem in a linked list
 * @h: address of the first node
 * Return: num of nodes in list
 */
size_t listint_len(const listint_t *h)
{
	size_t node;

	node = 0;
	while (h != NULL)
	{
		h = h->next;
		node++;
	}
	return (node);
}
