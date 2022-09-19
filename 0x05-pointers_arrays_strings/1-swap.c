#include "main.h"

/**
 * swap_int - this functions swaps the value of each int a and b
 * where a == b and b == a
 * @a: first int
 * @b: second int
 */

void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
