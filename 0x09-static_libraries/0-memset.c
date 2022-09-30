#include "main.h"

/**
 * _memset - fills the first @n bytes of the memory area pointed
 *
 * @s: memory pointer
 * @b: memory s value
 * @n: number of bytes
 *
 * Return: pointer to the memory s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}

	return (s);
}
