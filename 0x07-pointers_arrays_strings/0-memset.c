#include "main.h"

/**
 * _memset - files
 * @s: pointer to put
 * @b: data to change
 * @n: index
 * Return: *s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int l;

	for (l = 0; n > 0; l++)
	{
		s[l] = b;
	}
	return (s);
}
