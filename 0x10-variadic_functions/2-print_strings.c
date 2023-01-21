#include "variadic_functions.h"

/**
 * print_strings -prints strings followed by a new line
 * @separator: str param to be printed btn the strings
 * @n: number of args
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *str = "";
	
	va_start(ap,n);
	if (separator == NULL)
		separator = str;
	for (i = 0; i < n - 1; i++)
		printf("%s%s", va_arg(ap, char *), separator);
	printf("%s",va_arg(ap, char *));
	printf("\n");
	va_end(ap);
}
