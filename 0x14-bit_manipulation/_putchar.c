#include <unistd.h>


/**
 * _putchar - Prints to the standard output
 * @c: character to be printed
 * Return: Always 0 on success and -1 on error
 *
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
