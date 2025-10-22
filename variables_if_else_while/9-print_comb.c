#include <stdio.h>

/**
 * main - Print all possible combinations of single-digit numbers
 *
 * Return: always 0
 */

int main(void)
{
	int numbers;

	for (numbers = '0'; numbers <= '9'; numbers++)
	{
	putchar(numbers);

	if (numbers > 9)
	{
	putchar(',');
	putchar(' ');
	}
	}
	putchar('\n');

return (0);
}
