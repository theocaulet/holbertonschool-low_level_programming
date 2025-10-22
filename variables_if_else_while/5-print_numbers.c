#include <stdio.h>

/**
 * main - Print all single digit numbers of base 10 starting from 0
 *
 * Return: always 0
 */

int main(void)
{
	char numbers;

	for (numbers = '0'; numbers <= '9'; numbers++)
	{
	putchar(numbers);
	}
	putchar('\n');

return (0);
}
