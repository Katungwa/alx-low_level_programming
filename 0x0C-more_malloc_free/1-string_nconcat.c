#include "main.h"
#include <string.h>

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
	int i, j;

	i = strlen(s1);
	j = strlen(s2);

	s = malloc(i + n);
	if (s == NULL)
		return (NULL);
	if (i == 0)
		s1 = " ";
	if (j == 0)
		s2 = " ";
	if ((n == 0) || (n >= j))
		return (s = strcat(s1, s2));
	return (s = strncat(s1, s2, n));
}
