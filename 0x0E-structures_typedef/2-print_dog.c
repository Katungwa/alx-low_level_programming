#include "dog.h"
#include "stdlib.h"

/**
 * print_dog - prints contents of a struct
 * @d: pointer to struct location
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if ((*d).name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s,\n", d->name);

	if ((*d).age == NULL)
		printf("Age: (nil)\n");
	else
		printf("Age: %f\n", d->age);

	if ((*d).owner == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->owner);
}
