#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point for simple calculator
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success or error codes
 */
int main(int argc, char *argv[])
{
	int (*f)(int, int);
	int a, b;

	if (argc != 4)
	{
	printf("Error\n");
	return (98);
	}
	f = get_op_func(argv[2]);
	if (argv[2][1] != '\0' || f == NULL)
	{
	printf("Error\n");
	return (99);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	if ((argv[2][0] == '/' || argv[2][0] == '%') && b == 0)
	{
	printf("Error\n");
	return (100);
	}
	printf("%d\n", f(a, b));
	return (0);
}
