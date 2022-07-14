#include <unistd.h>

/**
 * _putchar - prints to the standard output
 * @c: the character to be printed
 * Return: 1  on success.
 * On erro, -1 is returned and error is set appriopriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
