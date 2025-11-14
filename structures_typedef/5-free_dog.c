#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dog - function that frees dogs
 * @d: Pointer to the dog to free
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
	{
	return;
	}
	if (d->name != NULL)
	{
	free(d->name);
	}
	if (d->owner != NULL)
	{
	free(d->owner);
	}
	free(d);
}
