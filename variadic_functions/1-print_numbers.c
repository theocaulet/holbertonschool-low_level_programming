#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	if (separator == NULL)
	{
	}

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
	int value = va_arg(args, int);

	printf("%d", value);
	if (i < n - 1)
	{
	printf("; ");
	}
	}
	va_end(args);

	putchar('\n');
}

