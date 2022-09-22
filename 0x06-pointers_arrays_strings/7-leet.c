#include "main.h"
#include <stdio.h>


/**
 * leet -  a function that encodes a string into 1337.
 * @s: encoded string
 *
 * Return: returns the encoded string
 */

char *leet(char *s)
{
	int i;
	int j;

	char *k = "aAeEoOtTlL";
	char *l = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == k[j])
			{
				s[i] = l[j];
			}
		}
	}
	return (s);
}
