#include "main.h"
#include <string.h>

/**
 * puts2 - prints chars of a string starting with the first
 * @str: The string to be printed
 * Return - void
 */
void puts2(char *str)
{
	int i, len;

	len = strlen(str) - 1;
	for (i = 0; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}



