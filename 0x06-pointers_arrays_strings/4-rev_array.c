#include "main.h"
#include <stdio.h>

/**
 * reverse_array -  reverses the content of an array of integers.
 * @a: reverse a
 * @n: the number of elements of the array
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int i;
	int j;
	int k;

	j = n - 1;

	for (i = 0; i < n / 2; i++)
	{
		k = a[i];
		a[i] = a[j];
		a[j--] = k;

	}
}
