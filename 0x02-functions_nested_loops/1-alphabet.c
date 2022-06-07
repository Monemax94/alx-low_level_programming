#include "main.h"

/**
 * A function that prints the alphabet, in lowercase, followed by a new line.
 */
int main(void)
{
	char ch;

	ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}

	_putchar('\n');
}
