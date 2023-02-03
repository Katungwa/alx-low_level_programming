#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: pointer to a node address
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *node;

	while (*head != NULL)
	{
		node = *head;
		*head = node->next;
		free(node);
	}
	head = NULL;
}
