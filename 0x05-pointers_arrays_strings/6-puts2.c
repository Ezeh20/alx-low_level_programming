#include "main.h"

/**
 * puts2 - prints one char out of 2 of a string
 * @str: string to be printed
 */

void puts2(char *str)
{
	int i;
	int j;

	i = 0;
	while (str[i] != '\0')
		i++;
	for (j = 0; j < i; j += 2)
		_putchar(str[j]);
	_putchar('\n');
}
