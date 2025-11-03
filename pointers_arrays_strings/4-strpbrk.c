#include "main.h"

/**
 * *_strpbrk - searches a string for any of a set of bytes
 * @s: chaine to analyze
 * @accept: allowed character string
 * Return: a pointer to the byte in s that matches one of the bytes in accept
 */
char *_strpbrk(char *s, char *accept)
{
	char *a;

	while (*s)
	{
	for (a = accept; *a; a++)
	{
	if (*s == *a)
	return (s);
	}
	s++;
	}
	return (0);
}
