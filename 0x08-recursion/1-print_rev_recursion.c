#include "main.h"

/**
 * _print_rev_recursion - prints a strin in reverse
 *s - The string to be reversed
 * return - void
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;
	s++;
	_print_rev_recursion(s);
	s--;
	_putchar(*s);
}
