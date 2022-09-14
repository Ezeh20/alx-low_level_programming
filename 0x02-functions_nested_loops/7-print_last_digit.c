#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the int to extract the last digit from
 * Return: the last value of the number
 */

int print_last_digit(int n)
{
	int r;

	if (n < 0)
		n = -n;
	r = n % 10;
	if (r < 0)
		r = -r;
	_putchar('0' + r);
	return (r);
}
