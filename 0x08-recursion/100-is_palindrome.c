#include "main.h"

int strlen_recursion(char *s);
int check_pal(char *s, int, int);

/**
 * strlen_recursion - Checks len of string
 * @s: string param
 * Return: len of the string
 */
int strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + strlen_recursion(s + 1));
}

/**
 * check_pal - checks whether the str is a palindrome
 * @s: string param
 * @i: int param
 * @len: str len param
 * Return: True(1), False(0)
 */
int check_pal(char *s, int i, int len)
{
	if (*(s + i) != *(s + (len - 1)))
		return (0);
	if (i >= len)
		return (1);
	return (check_pal(s, i + 1, len - 1));
}

/**
 * is_palindrome - confirms the string viablity to be a palindrome
 * @s: string to be checked
 * Return: 1 for is a palindrome and 0 not a palindrom
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, strlen_recursion(s)));
}
