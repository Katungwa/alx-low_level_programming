#include "main.h"

/**
 * _strlen: length of a string
 * s: address of the string
 * return: int
 */
int _strlen(char *s)
{
	int len;

	len = sizeof(s)/sizeof(s[0]);
	return len;
}
