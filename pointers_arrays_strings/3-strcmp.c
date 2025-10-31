#include "main.h"
#include <stdio.h>

/**
 * _strcmp - compare two strings
 * @s1: First pointer
 * @s2: Second pointer
 * Return: s1 - s2
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
	s1++;
	s2++;
	}
	return (*s1 - *s2);
}
