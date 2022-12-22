#include "main.h"
#include <string.h>

/**
 * print_rev - prints a string in reverse
 * @s: The strin to be reversed
 * Return : void
 */
void print_rev(char *s)
{
	int len;
	int middle;
	int temp, i;
	char str[] = *s;

	len = strlen(str);
	middle = len / 2;

	for (i = 0; i < middle; i++)
	{
		temp = str[i];
		str[i] = str[len - i - 1];
		str[len - i - 1] = temp;
	}
	puts(str);
}
