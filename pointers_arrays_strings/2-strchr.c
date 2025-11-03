#include "main.h"

/**
 * *_strchr - locates a character in a string
 * @s: Pointer of the string
 * @c: Character to return
 * Return: the character c
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
	if (*s == c)
	return (s);
	s++;
	}
	if (c == '\0')
	{
	return (s);
	}
	else
	{
	return (0);
	}
}
