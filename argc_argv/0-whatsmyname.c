#include "main.h"
#include <stdio.h>

/**
 * main - Entry point of the program
 * @argc: Number of command-line arguments
 * @argv: Array of command-line argument strings
 *
 * Description: This program prints its own name, i.e., the first argument
 * passed to it on the command line.
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	(void)argc; /* Ignore argc since we don't use it */
	printf("%s\n", argv[0]);
	return (0);
}

