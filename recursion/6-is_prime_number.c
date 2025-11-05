#include "main.h"

/**
 * is_prime_number - returns 1 if the integer is a prime number, otherwise 0
 * @n: The integer of the function
 * Return: 1 if the integer is a prime number, otherwise 0
 */
int is_prime_number(int n)
{
	int i;

	if (n <= 1)
	{
	return (0);
	}
	for (i = 2; i * i <= n; i++)
	{
	if (n % i == 0)
	return (0);
	}
	return (1);
}
