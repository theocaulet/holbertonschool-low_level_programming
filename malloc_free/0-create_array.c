#include "main.h"
#include <stdlib.h>

/**
 * *create_array - creates an array of chars, and initializes it
 * @size: the size of the array
 * @c: chracter for initialize
 * Return: a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size == 0)
	{
	return (0);
	}
	array = malloc(size * sizeof(char));
	if (array == 0)
	{
	return (0);
	}
	for (i = 0; i < size; i++)
	{
	array[i] = c;
	}
	return (array);
}
