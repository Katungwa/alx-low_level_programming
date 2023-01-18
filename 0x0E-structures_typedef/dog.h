#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog structure
 * @name: first member
 * @age: second member
 * @owner: Third member
 * Description: struct dog store elements about the dog
 */
struct dog
{
	struct dog *d;
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
