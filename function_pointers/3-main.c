#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Performs a simple arithmetic operation
 * @argc: Number of arguments
 * @argv: Array of arguments
 *
 * Return: 0 on success, or error
 */
int main(int argc, char *argv[])
{
	int (*f)(int, int);
	int a;
	int b;

	if (argc != 4)
	{
	printf("Error\n");
	return (98);
	}
	if (argv[2][1] != '\0')
	{
	printf("Error\n");
	return (99);
	}
	f = get_op_func(argv[2]);
	if (f == NULL)
	{
	printf("Error\n");
	return (99);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	printf("%d\n", f(a, b));
	return (0);
}


