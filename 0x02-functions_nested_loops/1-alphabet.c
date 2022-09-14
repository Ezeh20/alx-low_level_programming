#include "main.h"

/**
 * print_alphabet - prints alphabets then a new line
 */

void print_alphabet(void)
{
	char cha;

	cha = 'a';

	while (cha <= 'z')
	{
		_putchar(cha);
		cha++;
	}

	_putchar('\n');
}
