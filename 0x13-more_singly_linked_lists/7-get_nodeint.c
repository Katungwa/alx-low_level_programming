#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node
 * @head: address of first node
 * @index: The node to be returned
 * Return: address of nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (i < index && head != NULL)
	{
		head = head->next;
		i++;
	}
	return (head);
}
