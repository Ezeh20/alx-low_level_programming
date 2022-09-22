#include "main.h"
#include <stdio.h>


/**
 * _strncat - concatenates two strings.
 * @dest: to be appended
 * @src: appends the src string to the dest
 * @n: uses the bytes from src
 * Return: a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
