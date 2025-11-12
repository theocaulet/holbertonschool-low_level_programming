#include "main.h"
#include <stdlib.h>

/**
 * *array_range - creates an array of integers
 * @min: First integer
 * @max: Second integer
 * Return: the pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int i, *array;

	if (min > max)
	{
	return (NULL);
	}
	array = malloc((max - min + 1) * sizeof(int));
	if (array == NULL)
	{
	return (NULL);
	}
	for (i = 0; i < (max - min + 1); i++)
	{
	array[i] = min + i;
	}
	return (array);
}
