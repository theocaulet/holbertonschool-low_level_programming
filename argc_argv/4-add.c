#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive numbers
 * @argc: number of command-line arguments
 * @argv: array of command-line argument strings
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	int i, j, sum = 0;
	char *num;

	if (argc == 1)
	{
	printf("0\n");
	return (0);
	}

	for (i = 1; i < argc; i++)
	{
	num = argv[i];
	for (j = 0; num[j] != '\0'; j++)
	{
	if (!isdigit(num[j]))
	{
	printf("Error\n");
	return (1);
	}
	}
	sum += atoi(num);
	}

	printf("%d\n", sum);
	return (0);
}

