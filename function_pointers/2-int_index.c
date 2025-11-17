#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - returns the index of the first element
 * @array: array of the function
 * @size: number of elements in the array
 * @cmp: used to compare values
 * Return: If no element matches, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
	return (-1);
	}
	if (array == NULL)
	{
	return (-1);
	}
	if (cmp == NULL)
	{
	return (-1);
	}
	for (i = 0; i < size; i++)
	if (cmp(array[i]) != 0)
	{
	return (i);
	}
	return (-1);
}

