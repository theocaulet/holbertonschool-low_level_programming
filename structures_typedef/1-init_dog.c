#include "main.h"

/**
 * init_dog - initialize a variable of type struct dog
 * struct dog - Structure representing a dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner's name
 * @d: Pointer of the structure
 * Description: This function sets the values of a struct dog
 * given a pointer to the struct and the values.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}
