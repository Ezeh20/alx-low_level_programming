#include "main.h"

/**
 * _isupper - Checks for uppercase characters
 *
 * @c: the number to check
 *
 * Return: 1 on success and 0 on fail
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
