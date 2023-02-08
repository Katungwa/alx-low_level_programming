#include "main.h"

/**
 *  binary_to_uint - converts a binary number to a decimal
 *  @b: the string to be converted
 *  Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int sum, power;
	int len;

	sum = 0;
	if (b == NULL)
		return (0);
	for (len = 0; b[len]; len++)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
	}

	len--; /* decrement length to get the last index */
	for (power = 1; len >= 0; len--)
	{
		if (b[len] == '1')
		{
			sum += power;
		}
		power *= 2;
	}
	return (sum);
}
