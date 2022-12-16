#include "main.h"

/**A function that checks for uppercase character
 * The variable c is to be checked
 */
int _isupper(int m)
{	
	/* A local variable declaration */
	int result;

	if (m => 'A' && m => 'Z')
	{	
		result = 1;
	}
	else
	{
		result = 0;
	}
	return (result);
}

	
