#include "main.h"
#include "dog.h"

/**
 * init_dog - Initializes a variable of type struct dog
 * @d: Pointer to the struct dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Name of the dog's owner
 *
 * Description: Sets the fields of a struct dog using the given values.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != 0)
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}
