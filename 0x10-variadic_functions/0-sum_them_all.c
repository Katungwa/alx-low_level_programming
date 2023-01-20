#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters
 * @n:fixed paramaeter
 * Return: Sum of the parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int i, sum;

	if (n == 0)
		return (0);

	sum = 0;
	va_start(ap, n);
	for (i = n; i != 0; i--)
		sum += va_arg(ap, int);

	return (sum);
	va_end(ap);
}
