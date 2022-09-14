#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
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

