#include "lists.h"

/**
 * add_nodeint - adds new node at beginning of list
 * @head: pointer to the address of first node
 * @n: int param
 * Return: address of the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (head == NULL)
	{
		*head = new;
		return (new);
	}
	new->next = *head;
	*head = new;
	return (new);
}
