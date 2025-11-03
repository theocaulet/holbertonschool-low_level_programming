#include "main.h"

/**
 * *_memcpy - copies memory area
 * @dest: Memory area
 * @src: Memory area to copied
 * @n: bytes from memory area
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
	dest[i] = src[i];
	i++;
	}
	return (dest);
}
