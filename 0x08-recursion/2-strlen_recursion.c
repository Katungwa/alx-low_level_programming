#include "main.h"

/**
 * _strlen_recursion - The function to count len
 * @s: The string whose len is to be determined
 * Return: len of string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return(0);
	s++;
	return (1 + _strlen_recursion(s));
}

