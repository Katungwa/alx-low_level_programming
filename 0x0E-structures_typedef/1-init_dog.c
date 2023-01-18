#include "main.h"
#include "dog.h"

/**
 * init_dog - initializes a struct
 * @struct dog *p: structure
 * @name: first value of struct variable
 * @age: age member
 * @owner: owner member
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
