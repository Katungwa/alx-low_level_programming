#include "lists.h"

/**
 * free_listint - frees the list by freeing the nodes
 * @head: pointer to first node of list
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *node;

	while (head->next != NULL)
	{
		node = head->next;
		free(head);
		head = node;
	}
	free(node);
}
