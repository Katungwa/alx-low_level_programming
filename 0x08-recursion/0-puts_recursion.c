#include "main.h"

/**
 * _puts_recursion - Prints out a string followed by a new line
 * @s: a character pointer to the string of words
 * Return - void
 */
void _puts_recursion(char *s)
{
	int i;
	i = 0;

	if (s[i] == '\0')
		_putchar('\n');

	else
		_putchar(s[i]);
		i++;

	_puts_recursion(s);

}
