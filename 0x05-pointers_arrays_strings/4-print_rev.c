#include "main.h"
#include <string.h>

/**
 * print_rev - prints a string in reverse
 * @s: The strin to be reversed
 * Return : void
 */
void print_rev(char *s)
{
	int i, n;

	n = strlen(s);
	for (i = n - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
