#include <stdio.h>

/**
 * main - Print the alphabet in lowercase
 *
 * Return: always 0
 */

int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
	if (alphabet != 'e' && alphabet != 'q')
	{
	putchar(alphabet);
	}
	}
	putchar('\n');

return (0);
}
