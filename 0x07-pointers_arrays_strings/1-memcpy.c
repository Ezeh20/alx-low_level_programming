#include "main.h"
#include <stdio.h>

/**
 * *_memcpy - a function that copies memory area.
 * @dest: destination
 * @src: source memory area
 * @n: the number of bytes
 *
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
		unsigned int i;

		for (i = 0; i < n; i++)
			dest[i] = src[i];
	return (dest);
}
		
