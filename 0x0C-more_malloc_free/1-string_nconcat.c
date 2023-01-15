#include "main.h"

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
	unsigned int i, j, index;

	if (s1 == NULL)
		s1 == " ";

	if (s2 == NULL)
		s2 == " ";

	i, j = 0;
	while (s1[i] != '\0')
		i++;

	while (s2[j] != '\0')
		j++;

	s = malloc(i + n);

	if (s == NULL)
		return (NULL);

	for (index = 0; index < (i); index++)
		s[index] = s1[index];

	if (n >= j)
		for (index = 0; index < (j); index++)
			s[i] = s2[index];
			i++;
	if (n < j)
		for (index = 0; index < n; index++)
			s[i] = s2[index];
			i++;

	s[i] = '\0';
	return (s);
}
