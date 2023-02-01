#include "lists.h"

/**
 * add_node - adds node at the beginning of list
 * @head - The pointer to the address of first node
 * @str: str param
 * @Return: pointer
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	char *dup_str;
	unsigned int len;


	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	dup_str = strdup(str);
	if (dup_str == NULL)
	{
		free(new);
		return (NULL);
	}

	for (len = 0; str[len]; len++)
		continue;

	new->str = dup_str;
	new->len = len;
	new->next = *head;

	*head = new;
	return (new);
}
