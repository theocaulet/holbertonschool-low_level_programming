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
	unsigned int len1 = 0, len2 = 0;
	char *array;

	if (s1 == NULL || s2 == NULL)
	{
	s1 = "";
	s2 = "";
	}
	while (s1[len1] != '\0')
	{
	len1++;
	}
	while (s2[len2] != '\0')
	{
	len2++;
	}
	array = malloc((len1 + len2 + 1) * sizeof(char));
	if (array == NULL)
	{
	return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
	array[i] = s1[i];
	}
	for (j = 0; j < len2; j++)
	{
	array[i + j] = s2[j];
	}
	array[i + j] = '\0';
	return (array);
}
