#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initializes a struct
 * @d: pointer to a struct data type
 * @name: first value of struct variable
 * @age: age member
 * @owner: owner member
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
