#include "main.h"
#include <stdio.h>

/**
 * _strspn - a function that gets the length of a prefix substring.
 * @s: initial string
 * @accept: bytes of char 
 * Return: the number of bytes in the initial segment of 
 * s which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	int k;
	int l;

	k = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		l = 0;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				k++;
				l = 1;
			}
		}
		if (l == 0)
		{
			return (k);
		}
	}
	return (0);
}
