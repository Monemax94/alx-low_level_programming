#include "main.h"

/**
 * _puts - prints a string to stdout followed by new line
 *@str: pointer to the string to be printed
 */
void _puts(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
	{
		_putchar(str[a]);
	}
	_putchar ('\n')
}
