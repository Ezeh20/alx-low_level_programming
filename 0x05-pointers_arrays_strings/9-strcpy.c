#include "main.h"

/**
 * _strcpy - copies the string pointed to by src
 * including the terminating null byte (\0)
 * @dest: pointer to the buffer
 * @src: string to be copied
 * Return: the pointer
 */

char *_strcpy(char *dest, char *src)
{
	int i;
	int j;

	while (src[i] != '\0')
		i++;

	for (j = 0; j < i; j++)
		dest[j] = src[j];
	dest[j] = '\0';

	return (dest);
}
