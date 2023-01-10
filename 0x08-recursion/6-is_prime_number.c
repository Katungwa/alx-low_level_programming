#include "main.h"

int _prime_num(int, int);

/**
 * _prime_num - divides the given number by numbers from 0 to 9
 * @n: int param
 * @i: range of decider nums
 * Return: int 1 or 0
 */
int _prime_num(n, i)
{
	if (i > 9)
		return (1);
	if ((n % i) == 0)
		return (0);
	_prime_num(n, (i + 1));
}

/**
 * is_prime_number - solves for the prime number
 * @n: int param
 * Return: int num
 */
int is_prime_number(int n)
{
	return (_prime_num(n, 1));
}

