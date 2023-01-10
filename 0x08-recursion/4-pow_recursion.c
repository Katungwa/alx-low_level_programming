#include "main.h"

/**
 * _pow_recursion - Raises int x to the power int y
 * @x: int param
 * @y: int param
 * Return: powers
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, (y - 1)));
}
