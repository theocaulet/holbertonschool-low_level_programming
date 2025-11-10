#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * *str_concat - concatenates two strings
 * @s1: First string
 * @s2: Second string
 * Return: pointer should point a newly allocated space in memory
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i = 0, j = 0;
	char *array;

	if (s1 == 0 || s2 == 0)
	{
	s1 = "";
	s2 = "";
	}
	while (s1[i] != '\0')
	{
	i++;
	}
	array = malloc((strlen(s1) + strlen(s2) + 1) * sizeof(char));
	if (array == 0)
	{
	return (0);
	}
	for (i = 0; i < strlen(s1); i++)
	{
	array[i] = s1[i];
	}
	while (s2[j] != '\0')
	{
	array[i] = s2[j];
	i++;
	j++;
	}
	array[i] = '\0';
	return (array);
}
