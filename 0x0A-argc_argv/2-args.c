#include "main.h"

/**
 * main - prints all args it receives
 * @argc: num of aargs
 * @argv: array of strings
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
