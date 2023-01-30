#include "list.h"
#include <stdio.h>

/**
 * print_list - prints elem in a list(no of nodes)
 * @h: link(address to next linked item)
 * return: print nil if no string and num of elements
 */
size_t print_list(const list_t *h)
{
	 unsigned int i = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (Nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		i++;
	}
	return (i);
}
