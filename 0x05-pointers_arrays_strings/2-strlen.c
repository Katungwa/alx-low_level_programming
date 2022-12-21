#include "main.h"

/**
 * _strlen - length of a string
 * @s: address of the string
 * return: int
 */
int _strlen(char *s)
{
	int len;
	int elem;
	char str[] = *s;


	elem = str[0];

	len = sizeof(str) / sizeof(elem);
	return (len);
}
