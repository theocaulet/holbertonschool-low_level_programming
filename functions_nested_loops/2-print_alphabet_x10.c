#include "main.h"

/**
 * print_alphabet_x10 - print the alphabet 10 times
 */
void print_alphabet_x10(void)
{
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz\n";
	char buffer[270];
	int i, j;

	for (i = 0; i < 10; i++)
	{
	for (j = 0; j < 27; j++)
	{
	buffer[i * 27 + j] = alphabet[j];
	}
	}

	for (i = 0; i < 270; i++)
	_putchar(buffer[i]);

	_putchar('\n');
}
