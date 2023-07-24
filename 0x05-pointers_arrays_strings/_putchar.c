#include <unistd.h>

/**
 * _putchar - erites the character c to stdout
 * @c: the character to print
 *
 * return: on succes 1.
 * on error, -1 is returned, and errno is set apporopriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
