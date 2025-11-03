#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: chaine to analyze
 * @accept: allowed character string
 * Return: number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	char *a;
	int j;

	while (*s)
	{
	j = 0;
	a = accept;
	for (a = accept; *a; a++)
	{
	if (*s == *a)
	j = 1;
	}
	if (j == 0)
	{
	return (i);
	}
	i++;
	s++;
	}
	return (i);
}
