#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked -  allocates memory using malloc
 * @b: integer of the function
 * Return: pointer to the allocated memory
 * If allocation fails, the program terminates with exit status 98
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
	{
	exit(98);
	}
	return (p);
}
