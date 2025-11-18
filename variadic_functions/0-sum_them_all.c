#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - The sum of all its parameters
 * @n: Integer of the function
 * Return:  the sum of all its parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int j = 0;

	if (n == 0)
	{
	return (0);
	}

	va_list args;
	va_start(args, n);

	for (i = 0; i < n; i++)
	{
	int value = va_arg(args, int);
	j += value;
	}
	va_end(args);

	return (j);
}
