#include "lists.h"

/**
 * sum_listint - sum af all data (n) of a linked list
 * @head: address of first node
 * Return: sum of all data in the nodes
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
