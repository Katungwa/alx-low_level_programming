#include "main.h"
#include <string.h>

/**
 * puts_half -  prints second half of a given string
 * @str: The string to be manipulated
 * Return: void
 */
void puts_half(char *str)
{
	int i, half, len;

	len = strlen(str);
	if (len % 2 == 0)
	{
		half = len / 2;
	}
	else
		half = (len - 1) / 2;
	for (i = half; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
