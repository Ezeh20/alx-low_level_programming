#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array - a function that creates an array of chars,
 * and initializes it with a specific char. 
 *
 * @size: size of array
 * @c: the character to initialize
 *
 * Return: a pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *ch;
	unsigned int i = 0;

	if (size == 0)
	{
		return (NULL);
	}

	ch = (char *) malloc(sizeof(char) * size);

	if (ch == NULL)
	{
		return (0);
	}
	while (i < size)
	{
		*(ch + i) = c;
		i++;
	}
	*(ch + i) = '\0';

	return (ch);
}
