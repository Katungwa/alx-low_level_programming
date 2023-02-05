#include "main.h"

/**
 * main - adds positve numbers
 * @argc: num of args
 * @argv: array of strings
 * Return: 0;
 */
int main(int argc, char *argv[])
{
	int i, sum;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	sum = 0;
	for (i = 0; i < argc; i++)
	{
		if (atoi(argv[i]) < 0)
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n",sum);
	return (0);
}	
