#include "lists.h"

/**
 * insert_nodeint_at_index - insert a node at a given position in list
 * @head: pointer to the first address node
 * @idx: position where the new node is to be added
 * @n: int param
 * Return: address of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node, *temp;
	unsigned int i = 0;

	temp = *head;
	node = malloc(sizeof(listint_t));
	if (!node || !head)
		return (NULL);
	node->n = n;
	node->next = NULL;

	if (idx == 0)
	{
		node->next = *head;
		*head = node;
		return (node);
	}
	for (i; temp && i < idx; i++)
	{
		if (i == (idx - 1))
		{
			node->next = temp->next;
			temp->next = node;
			return (node);
		}
		else
			temp = temp->next;
	}
	return (NULL);
}
