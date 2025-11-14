#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Name of the dog's owner
 * Return: The pointer to the new dog, or NULL on failure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int i, len;

	if (name == NULL)
	{
	return (NULL);
	}
	if (owner == NULL)
	{
	return (NULL);
	}
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
	return (NULL);
	}
	for (len = 0; name[len]; len++)
	dog->name = malloc(len + 1);
	if (dog->name == NULL)
	{
	free(dog);
	return (NULL);
	}
	for (i = 0; i <= len; i++)
	dog->name[i] = name[i];
	for (len = 0; owner[len]; len++)
	dog->owner = malloc(len + 1);
	if (dog->owner == NULL)
	{
	free(dog->name);
	free(dog);
	return (NULL);
	}
	for (i = 0; i <= len; i++)
	dog->owner[i] = owner[i];
	dog->age = age;
	return (dog);
}


