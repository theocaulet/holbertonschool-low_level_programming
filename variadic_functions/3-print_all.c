#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <string.h>

/**
 * _strlen - Return the length of the string
 * @s: The string to the function
 * Return: The length of the string
 */
int _strlen(const char *s)
{
	int l = 0;

	while (s[l] != '\0')
	l++;
	return (l);
}
/**
 * _print - prints argument
 * @format: list of types of arguments passed to the function
 * @ap: argument list
 */
void _print(const char * const format, va_list ap)
{
	int i = 0;
	int print_int, print_char;
	double print_float;
	char *print_string;

	while (format != NULL && i < _strlen(format))
	{
	switch (format[i])
	{
	case 'c':
	print_char = va_arg(ap, int);
	printf("%c", print_char);
	break;
	case 'i':
	print_int = va_arg(ap, int);
	printf("%d", print_int);
	break;
	case 'f':
	print_float = va_arg(ap, double);
	printf("%f", print_float);
	break;
	case 's':
	print_string = va_arg(ap, char *);
	if (print_string == NULL)
	{
	printf("(nil)");
	break;
	}
	printf("%s", print_string);
	break;
	default:
	i++;
	continue;
	}
	if (i + 1 > _strlen(format))
	printf(", ");
	i++;
	}
}
/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	va_list ap;

	va_start(ap, format);

	_print(format, ap);

	printf("\n");
	va_end(ap);
}




