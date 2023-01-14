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
	int i, j, index;

	if (s1 == NULL)
		s1 == " ";

	if (s2 == NULL)
		s2 == " ";

	i, j = 0;
	while (*s1 != '\0')
		s1++;
		i++;

	while (*s2 != '\0')
		s2++;
		j++;

	s = malloc(i + n);

	if (s == NULL)
		return (NULL);

	for (index = 0; index < (i - 1); index++)
		*s = s1[index];
		s++;

	if (n >= j)
		for (index = 0; index < (j - 1); index++)
			*s = s2[index];
			s++;
	if (n < j)
		for (index = 0; index < n; index++)
			*s = s2[index];
			s++;
	return (s);
}
