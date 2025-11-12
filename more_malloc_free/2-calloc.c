#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * *_calloc - allocates memory for an array
 * @nmemb: number of element of size bytes
 * @size: size of the array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *array;

	if (nmemb == 0)
	{
	return (NULL);
	}
	if (size == 0)
	{
	return (NULL);
	}
	array = malloc(nmemb * size);
	if (array == NULL)
	{
	return (NULL);
	}
	for (i = 0; i < nmemb * size; i++)
	{
	array[i] = 0;
	}
	return ((void *)array);
}

