#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line
 * @str: Pointer of the string
 */
void puts_half(char *str)
{
	int i;

	for (i = 5; str[i] != '\0'; i++)
	{
	_putchar(str[i]);
	}
	_putchar('\n');
}
