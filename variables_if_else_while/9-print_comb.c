#include <stdio.h>

/**
 * main - Print all possible combinations of single-digit numbers
 *
 * Return: always 0
 */

int main(void)
{
	for (int i = 0; i <= 9; i++)
	{
	for (int j = 0; j <= 9; j++)
	{
	putchar('0' + i);
	putchar('0' + j);

	if (!(i == 9 && j == 9))
	{
	putchar(',');
	}
	}
	}

return (0);
}
