#include "main.h"

/**
 * Printing an alphabet ten times in lowercase,
 * followed by a new line
 */
void print_alphabet_x10(void)
{
	char alphabet;
	int f;

	f = 0;
	
	while (f < 10)
	{
		ch = 'a';
		while (ch <= 'z')
		{
			_putchar (ch);
			ch++;
		}
		_putchar ('\n')
		f++;
	}
}
