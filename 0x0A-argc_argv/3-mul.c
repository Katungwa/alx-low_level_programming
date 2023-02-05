#include "main.h"

/**
 * main - prints the result of a multiplication
 * @argc: num of args
 * @argv: array of strings
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int mult = 0;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	mult = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", mult);
	return (0);

}
