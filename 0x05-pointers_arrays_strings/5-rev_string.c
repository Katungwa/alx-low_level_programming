#include "main.h"
#include <string.h>

/**
 * rev_string - A func that reverses a string
 * @s: string to be reversed
 * Return: void
 */
void rev_string(char *s)
{
	/*@len:length of the string*/
	int len;
	char temp;/*@temp;: temporary variable to hold array elem*/
	int middle;/*@middle: middle of a string*/

	len = strlen(s);
	middle = len / 2;
	for (int i = 0; i < middle; i++)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
}

