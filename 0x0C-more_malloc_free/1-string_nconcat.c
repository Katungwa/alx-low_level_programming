#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatnates one string parameter to another
 * @s1: string param
 * @s2: string param
 * @n: int param
 * Return: adrress of concat string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int len = n, index;

	if (s1 == NULL)
		s1 = " ";

	if (s2 == NULL)
		s2 = " ";

	for (index = 0; s1[index]; index++)
		len++;

	s = malloc(len + 1);

	if (s == NULL)
		return (NULL);

	len = 0;
	for (index = 0; s1[index]; index++)
		s[len++] = s1[index];
	for (index = 0; s2[index] && index < n; index++)
		s[len++] = s2[index];

	s[len] = '\0';
	return (s);
}
