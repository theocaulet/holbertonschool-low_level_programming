#include "main.h"

/**
 * _sqrt_helper - recursive function
 * @n: integer of the function
 * @x: Second integer
 * Return: If n does not have a natural square, the function should return -1
 */
int _sqrt_helper(int n, int x)
{
	if (x * x == n)
	{
	return (x);
	}
	else if (x * x > n)
	{
	return (-1);
	}
	else
	{
	return (_sqrt_helper(n, x + 1));
	}
}
/**
 * _sqrt_recursion - returns the natural square
 * @n: integer of the function
 *
 * Return: If n does not have a natural square, the function should return -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
	return (-1);
	}
	return (_sqrt_helper(n, 0));
}

