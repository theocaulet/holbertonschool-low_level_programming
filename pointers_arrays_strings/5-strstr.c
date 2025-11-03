#include "main.h"

/**
 * *_strstr - locates a substring
 * @haystack: string
 * @needle: substring
 * Return: a pointer to the beginning of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	char *h, *n;

	if (*needle == '\0')
	return (haystack);
	while (*haystack)
	{
	h = haystack;
	n = needle;
	while (*n && *h == *n)
	{
	h++;
	n++;
	}
	if (*n == '\0')
	return (haystack);
	haystack++;
	}
	return (0);
}
