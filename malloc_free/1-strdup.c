#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - returns a pointer to a new string
 * @str: Pointer to copy
 * Return: a pointer to a new string which is a duplicate of the string str
 */
char *_strdup(char *str)
{
	unsigned int i = 0, size = 0;
	char *array;

	if (str == 0)
	{
	return (0);
	}
	while (str[i] != '\0')
	{
	i++;
	size++;
	}
	array = malloc((size + 1) * sizeof(char));
	if (array == 0)
	{
	return (0);
	}
	for (i = 0; i < size; i++)
	{
	array[i] = str[i];
	}
	array[i] = '\0';
	return (array);
}
