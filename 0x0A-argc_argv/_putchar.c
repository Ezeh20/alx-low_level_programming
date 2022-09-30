#include <unistd.h>

/**
 * _putchar - writes a char to the standard output
 *
 * @c: the char to be sent to the output
 * Return: 1 on success || 0 on fail
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
