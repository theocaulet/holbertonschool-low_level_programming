#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - Prints a name
 * @name: Name of the person
 * @f: Second pointer
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
	{
	return;
	}
	if (f == NULL)
	{
	return;
	}
	f(name);
}

