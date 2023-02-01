#include "lists.h"

/**
 * add_node_end - adds a node at the end of the list
 * @head: address of the first node
 * @str: str param
 * Return: pointer or NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;
	char *dup_str;
	int len;


	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);
	for (len = 0; str[len];)
		len++;

	if (str == NULL)
	{
		free(new);
		return (NULL);
	}

	dup_str = strdup(str);
	new->str = dup_str;
	new->len = len;
	new->next = NULL;


	if (*head == NULL)
	{
		*head = new;
		temp = *head;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}
	return (new);
}
