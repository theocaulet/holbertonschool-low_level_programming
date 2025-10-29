#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: Pointer to the string
 *
 * Description: This function prints the characters of a string
 * in reverse order using _putchar, followed by a newline.
 */
void print_rev(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	;

	for (i = i - 1; i >= 0; i--)
	_putchar(s[i]);

	_putchar('\n');
}
