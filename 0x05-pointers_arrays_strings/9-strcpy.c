#include "main.h"

/**
 * _strcpy - copies a string to a buffer
 * @src: string pointer
 * @dest: The buffer to hold the copied string
 * Return: Pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i++] = '\0';

	return (dest);
}
