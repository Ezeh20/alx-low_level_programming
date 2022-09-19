#include <unistd.h>

/**
 * _putchar - writes to the standard output
 * @c: the char to be printed
 * Return: 1 on success and -1 on error
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
