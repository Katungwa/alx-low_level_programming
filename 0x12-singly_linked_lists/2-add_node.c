#include "lists.h"
#include <string.h>
#include <stdio.h>
/**
 * add_node - adds node at the beginning of list
 * @head - The pointer to the address of first node
 * @str: str param
 * Return: list_t struct elem address
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	char *dup_str;



	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	dup_str =strdup(str);
	if (dup_str == NULL)
	{
		free(new);
		return (NULL);
	}

	new->str = dup_str;
	new->len = strlen(str);
	new->next = *head;

	return (new);
}
