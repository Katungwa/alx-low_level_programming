#include "main.h"
/**
 * factorial - Finds the factorial of a number
 * @n: int param
 * Return: Factorial of the param
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
