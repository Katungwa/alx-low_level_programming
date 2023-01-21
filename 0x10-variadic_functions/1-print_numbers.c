#include "variadic_functions.h"
#include <stdio.h>
#include <stddef.h>
/**
 * print_numbers - prints numbers followed by a new line
 * @separator: string param
 * @n: number of integers passed to the func
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;
	char *str = "";

	if (separator == NULL)
		separator = str;

	va_start(ap, n);
	for (i = (n - 1); (i > 0); i--)
		printf("%d%s", va_arg(ap, int), separator);
	printf("%d", va_arg(ap, int));

	printf("\n");
	va_end(ap);
}
