#include "dog.h"

/**
 * new_dog - A func that creates new dog
 * @name: name of dog
 * @age: float age of the dog
 * @owner: owner of dog
 * Return: new dog or null if func fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t newdog;

