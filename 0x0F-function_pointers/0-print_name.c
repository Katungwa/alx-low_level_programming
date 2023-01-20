#include "function_pointers.h"

/**
 * print_name - prints a given name
 * @name: str param
 * @f: pointer to the func to be run for printing
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
