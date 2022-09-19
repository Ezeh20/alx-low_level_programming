#include "main.h"

/**
 * print_rev  - reverses a string followed by a new line
 *
 * @s: string to be reversed
 */

void print_rev(char *s)
{
	int i = 0;
	int j;
	int length;

	while (s[i] != '\0')
		i++;

	length = i;

	for (j = length - 1; j >= 0; j--)
		_putchar(s[j]);
	_putchar('\n');
}
