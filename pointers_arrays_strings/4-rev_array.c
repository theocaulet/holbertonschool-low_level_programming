#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: Pointer to the array
 * @n: number of elements of the array
 */
void reverse_array(int *a, int n)
{
	int i = 0, j = n - 1, temp;

	while (i < j)
	{
	temp = a[i];
	a[i] = a[j];
	a[j] = temp;
	i++;
	j--;
	}
}
