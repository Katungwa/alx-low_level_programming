#include "main.h"

/**
 * _print_rev_recursion - prints a strin in reverse
 *s - The string to be reversed
 * return - void
 */
void _print_rev_recursion(char *s)
{
	int l;

	l = strlen(s) - 1;
	if (l < 0)
		return;
	_putchar(s[l]);
	_print_rev_recursion(s);
	l--;
}

