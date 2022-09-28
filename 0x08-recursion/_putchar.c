#include <unistd.h>


/**
 * _putchar - writes a char to the standard output
 * @c: the char to print
 *
 *
 * Return: 1 on success or -1 on error
 */

int _putcha(char c)
{
	return (write(1, &c, 1));
}
