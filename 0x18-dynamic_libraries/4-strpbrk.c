#include "main.h"
/**
 * _strpbrk -  searches a string for any of a set of bytes.
 * @s: string to be scanned.
 * @accept: string to match.
 * Return: pointer to the byte in s that matches one of the bytes in accept,
 *         or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	int j;

	while (*s)
	{
		for (j = 0; accept[j]; j++)
		{
			if (*s == accept[j])
				return (s);
		}
		s++;
	}
	return (NULL);
}
