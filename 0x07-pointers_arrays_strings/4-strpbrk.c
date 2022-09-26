#include "main.h"
#include <stdio.h>

/**
 * *_strpbrk - a function that searches a string for 
 * any of a set of bytes.
 * @s: String to be searched
 * @accept: the first occurance in s
 * Return: a pointer to the byte in s that matches one of the 
 * bytes in accept, or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; *s != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*s == accept[j])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
