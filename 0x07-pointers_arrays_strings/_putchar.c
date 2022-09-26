#include <unistd.h>

/**
 * _putchar - writes a char to the standard output
 * @c: the char
 *
 * Return: 1 on success or -1 in case of an error
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
