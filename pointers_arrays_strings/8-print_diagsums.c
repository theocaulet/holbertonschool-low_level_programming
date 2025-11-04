#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - that prints the sum of the two diagonals
 * @a: Pointer of the function
 * @size: size of a square matrix
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sumi = 0, sumj = 0;

	for (i = 0; i < size; i++)
	{
	sumi += a[i * size + i];
	sumj += a[i * size + (size - 1 - i)];
	}
	printf("sum of the main diagonal: %d\n", sumi);
	printf("sum of the secondary diagonal: %d\n", sumj);
}
