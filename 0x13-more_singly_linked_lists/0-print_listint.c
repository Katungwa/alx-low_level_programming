#include "lists.h"

/**
 * print_listint - prints all elements in a list
 * @h: address to the the first node(element)
 * Return: number of node in list
 */
size_t print_listint(const listint_t *h)
{
	size_t i_node;

	i_node = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i_node++;
	}
	return (i_node);
}
