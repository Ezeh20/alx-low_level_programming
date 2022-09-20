#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */

void rev_string(char *s)
{
	int i;
	int j;
	int length;
	char c;

	j = 0;
	length = 0;

	while (s[j] != '\0')
		j++;
	length = j - 1;

	for (i = 0; i < j / 2; i++)
	{
		c = s[i];
		s[i] = s[length];
		s[length--] = c;
	}
}

