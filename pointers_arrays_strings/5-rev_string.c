#include "main.h"

/**
 * rev_string - reverses a string
 * @s: Pointer to the string
 */
void rev_string(char *s)
{
	int i, j = 0;
	char temp;

	for (j = 0; s[j] != '\0'; j++)
	;
	for (i = 0; i < j / 2; i++)
	{
	temp = s[i];
	s[i] = s[j - 1 - i];
	s[j - 1 - i] = temp;
	}
}
