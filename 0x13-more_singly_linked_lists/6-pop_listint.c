#include "lists.h"

/**
 * pop_listint - deletes the head node
 * @head: pointer to first nodes address
 * Return: head data n
 */
int pop_listint(listint_t **head)
{
	listint_t *node;
	int num;

	if (!*head || !head)
		return (0);
	num = (*head)->n;
	node = (*head)->next;
	free(*head);
	*head = node;

	return (num);
}
