#include "main.h"

/* main - prints num of args passed into it
 * @argc: num of arguments
 * @argv: Array of string
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n",(argc - 1));
	return (0);
}
