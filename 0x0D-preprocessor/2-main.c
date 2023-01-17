#include <stdio.h>

int main(void);

/**
 * _compiler - prints name of file that was compiled
 * Return: void
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
