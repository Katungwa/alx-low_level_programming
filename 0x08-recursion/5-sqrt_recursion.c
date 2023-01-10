#include "main.h"

int _squares(int, int);

/**
 * _squares - Tries to get a squre of a given param
 * @n: int param of the number to be acted apon
 * @i: The numbers to be tried for square
 * Return: The square
 */
int _squares(int n, int i)
{
	int sq = i * i;

	if (sq > n)
		return (-1);
	if (sq == n)
		return (i);
	return (_squares(n, (i + 1)));
}

/**
 * _sqrt_recursion - Runs the sqrt func
 * @n: int param to be acted on
 * Return: The sqrt of param n
 */

int _sqrt_recursion(int n)
{
	return (_squares(n, 1));
}
