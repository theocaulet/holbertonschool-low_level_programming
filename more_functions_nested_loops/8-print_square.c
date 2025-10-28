#include "main.h"

/**
 * print_square - Print a square, followed by a new line
 * @size: The size of a square
 *
 * Description: If size <= 0, the function should print only a new line
 */
void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (i = 0; i < size; i++)
	{
	for (j = 0; j < size; j++)
	{
	_putchar('#');
	}
	_putchar('\n');
	}
	}
}
