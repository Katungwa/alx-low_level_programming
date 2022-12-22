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
	

	len = strlen(s);
	middle = len / 2;

	for (i = 0; i < middle; i++)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
	printf("%s\n",s);
}
