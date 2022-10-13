#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - a function that executes a 
 *  function given as a parameter
 *  on each element of an array.
 *
 *  @array: array to be iterated
 *  @size: size of the array
 *  @action: points to the function used
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
