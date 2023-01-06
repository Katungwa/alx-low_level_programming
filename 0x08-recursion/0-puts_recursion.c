#include "main.h"

/**
 * _puts_recursion - Prints out a string followed by a new line
 * @s: a character pointer to the string of words
 * Return - void
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar("\n");

	_putchar(*s);
	s++;

	_puts_recursion(s);

}
