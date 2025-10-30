#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: Pointer of a string
 */
void puts_half(char *str)
{
	int i, j, len;

	len = 0;
	for (i = 0; str[i] != '\0'; i++)
	len++;

	if (len % 2 == 0)
	i = len / 2;
	else
	i = (len + 1) / 2;

	for (j = i; str[j] != '\0'; j++)
	_putchar(str[j]);

	_putchar('\n');
}

