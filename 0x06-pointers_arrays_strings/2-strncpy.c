#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to copy
 *
 * Return: pointer to the resulting string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int d;

	d = 0;

	while (src[d] != '\0' && d < n)
	{
		dest[d] = src[d];
		d++;
	}

	while (d < n)
	{
		dest[d] = '\0';
		d++;
	}

	return (dest);
}
