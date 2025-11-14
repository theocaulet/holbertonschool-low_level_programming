#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - Creates a new dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Name of the dog's owner
 *
 * Return: Pointer to the new dog, or NULL on failure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int i, len_name = 0, len_owner = 0;
	char *n, *o;

	if (!name)
	name = "";
	if (!owner)
	owner = "";
	while (name[len_name])
	len_name++;
	while (owner[len_owner])
	len_owner++;
	dog = malloc(sizeof(dog_t));
	if (!dog)
	return (NULL);
	n = malloc(len_name + 1);
	o = malloc(len_owner + 1);
	if (!n || !o)
	{
	free(n);
	free(o);
	free(dog);
	return (NULL);
	}
	for (i = 0; i <= len_name; i++)
	n[i] = name[i];
	for (i = 0; i <= len_owner; i++)
	o[i] = owner[i];
	dog->name = n;
	dog->owner = o;
	dog->age = age;
	return (dog);
}
