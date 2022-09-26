#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - a function that prints the sum of the 
 * two diagonals of a square matrix of integers.
 * @a: matrix
 * @size: matrix size
 */

void print_diagsums(int *a, int size)
{
	int i;

	unsigned int j;
	unsigned int k;

	j = 0;
	k = 0;

	for (i = 0; i < size; i++)
	{
		j += a[(size * i) + i];
		k += a[(size * (i + 1)) - (i + 1)];
	}

	printf("%d, %d\n", j, k);
}
