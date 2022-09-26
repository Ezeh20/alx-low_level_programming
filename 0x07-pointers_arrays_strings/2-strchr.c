#include "main.h"
#include <stdio.h>

/**
 * *_strchr - a function that locates a character in a string.
 * @s: original string
 * @c: char to find 
 * Return: Returns a pointer to the first occurrence 
 * of the character c in the string s
 * or NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	int i;

	while (1)
	{
		i = *s++;

		if (i == c)
			return (s - 1);
		else if (i == 0)
			return (NULL);
	}
}
