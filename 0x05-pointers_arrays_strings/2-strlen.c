#include "main.h"

/**
 * _strlen - This gives the length of a given string
 * @s: the string to be checked then return an int
 *
 * Return: the int
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}
