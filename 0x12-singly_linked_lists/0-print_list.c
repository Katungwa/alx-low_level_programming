#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints elem in a list(no of nodes)
 * @h: link(address to next linked item)
 * Return: num of elements
 */
size_t print_list(const list_t *h)
{
	size_t i_node;

	i_node = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		i_node++;
	}
	return (i_node);
}
