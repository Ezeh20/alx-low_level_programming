#include "main.h"
#include <stdlib.h>

/**
 * *_memset - a function that  fills memory with a constant byte
 *
 * @s: mem to fill
 * @b: char to cp
 * @n: num of times to cp to b
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}

/**
 * *_calloc - a function that allocates memory for an array, using malloc.
 *
 * @nmemb: num of elemets in the array
 * @size: size of each element
 *
 * Return: nmemb or size is 0, then _calloc return NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(size * nmemb);
	if (p == NULL)
		return (NULL);
	_memset(p, 0, nmemb * size);

	return (p);
}
