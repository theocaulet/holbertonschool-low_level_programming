#include "main.h"
#include <stdio.h>

/**
 * *_strncpy - copies the string
 * @dest: Pointer to copy
 * @src: The copy pointer
 * @n: bytes from src
 * Return: Pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (j < n && src[j] != '\0')
	{
	dest[i] = src[j];
	i++;
	j++;
	}
	if (j < n)
	{
	dest[i] = '\0';
	}
	return (dest);
}
