#include "main.h"
/**
 * _strspn - gets the length of a prefix substring.
 * @s: string to be scanned
 * @accept: string to be compared with s
 * Return: number of bytes in the initial segment of s
 *         which consist only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int no_bytes = 0;
	int i;

	while (*s != '\0')
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				no_bytes++;
				break;
			}
			else if (!accept[i + 1])
				return (no_bytes);
		}
		s++;
	}
	return (no_bytes);
}
